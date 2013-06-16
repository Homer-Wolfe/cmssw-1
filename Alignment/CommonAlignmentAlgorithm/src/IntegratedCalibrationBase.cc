/**
 * \file IntegratedCalibrationBase.cc
 *
 *  \author Gero Flucke
 *  \date August 2012
 *  $Revision: 1.1 $
 *  $Date: 2012/08/10 09:07:21 $
 *  (last update by $Author: flucke $)
 */

#include "Alignment/CommonAlignmentAlgorithm/interface/IntegratedCalibrationBase.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

// Already included in header:
//#include <vector>
//#include <utility>

//============================================================================
IntegratedCalibrationBase::IntegratedCalibrationBase(const edm::ParameterSet &cfg) 
  : name_(cfg.getParameter<std::string>("calibrationName"))
{
}
  
//============================================================================
std::vector<IntegratedCalibrationBase::Values>
IntegratedCalibrationBase::derivatives(const TransientTrackingRecHit &hit,
				       const TrajectoryStateOnSurface &tsos,
				       const edm::EventSetup &setup,
				       const EventInfo &eventInfo) const
{
  // Prepare result vector, initialised all with 0.:
  std::vector<Values> result(this->numParameters(), Values(0.,0.));

  // Get non-zero derivatives and their index:
  std::vector<ValuesIndexPair> derivsIndexPairs;
  const unsigned int numNonZero = this->derivatives(derivsIndexPairs,
						    hit, tsos, setup,
						    eventInfo);

  // Put non-zero values into result:
  for (unsigned int i = 0; i < numNonZero; ++i) {
    const ValuesIndexPair &valuesIndex = derivsIndexPairs[i];
    result[valuesIndex.second] = valuesIndex.first;
  }

  return result;
}
