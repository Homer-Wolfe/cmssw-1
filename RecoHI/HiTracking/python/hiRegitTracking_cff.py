import FWCore.ParameterSet.Config as cms

from RecoHI.HiTracking.hiRegitInitialStep_cff import *
from RecoHI.HiTracking.hiRegitLowPtTripletStep_cff import *
from RecoHI.HiTracking.hiRegitPixelPairStep_cff import *
from RecoHI.HiTracking.hiRegitDetachedTripletStep_cff import *
from RecoHI.HiTracking.hiRegitMixedTripletStep_cff import *

from RecoHI.HiTracking.MergeRegitTrackCollectionsHI_cff import *

hiRegitTracking = cms.Sequence(
    hiRegitInitialStep
    *hiRegitLowPtTripletStep
    *hiRegitPixelPairStep
    *hiRegitDetachedTripletStep
    *hiRegitMixedTripletStep
    *hiRegitTracks
    )

# Define region around jet 

hiRegitInitialStepSeeds.RegionFactoryPSet.RegionPSet.originRadius = 0.02
hiRegitLowPtTripletStepSeeds.RegionFactoryPSet.RegionPSet.originRadius = 0.02
hiRegitPixelPairStepSeeds.RegionFactoryPSet.RegionPSet.originRadius = 0.02
hiRegitDetachedTripletStepSeeds.RegionFactoryPSet.RegionPSet.originRadius = 1.5
hiRegitMixedTripletStepSeedsA.RegionFactoryPSet.RegionPSet.originRadius = 1.0
hiRegitMixedTripletStepSeedsB.RegionFactoryPSet.RegionPSet.originRadius = 0.5

hiRegitInitialStepSeeds.RegionFactoryPSet.RegionPSet.originHalfLength = 0.02
hiRegitLowPtTripletStepSeeds.RegionFactoryPSet.RegionPSet.originHalfLength = 0.02
hiRegitPixelPairStepSeeds.RegionFactoryPSet.RegionPSet.originHalfLength = 0.02
hiRegitDetachedTripletStepSeeds.RegionFactoryPSet.RegionPSet.originHalfLength = 1.5
hiRegitMixedTripletStepSeedsA.RegionFactoryPSet.RegionPSet.originHalfLength = 1.0
hiRegitMixedTripletStepSeedsB.RegionFactoryPSet.RegionPSet.originHalfLength = 0.5

hiRegitInitialStepSeeds.RegionFactoryPSet.RegionPSet.deltaPhiRegion = 0.3
hiRegitInitialStepSeeds.RegionFactoryPSet.RegionPSet.deltaEtaRegion = 0.3
hiRegitLowPtTripletStepSeeds.RegionFactoryPSet.RegionPSet.deltaPhiRegion = 0.3
hiRegitLowPtTripletStepSeeds.RegionFactoryPSet.RegionPSet.deltaEtaRegion = 0.3
hiRegitPixelPairStepSeeds.RegionFactoryPSet.RegionPSet.deltaPhiRegion = 0.3
hiRegitPixelPairStepSeeds.RegionFactoryPSet.RegionPSet.deltaEtaRegion = 0.3
hiRegitDetachedTripletStepSeeds.RegionFactoryPSet.RegionPSet.deltaPhiRegion = 0.3
hiRegitDetachedTripletStepSeeds.RegionFactoryPSet.RegionPSet.deltaEtaRegion = 0.3
hiRegitMixedTripletStepSeedsA.RegionFactoryPSet.RegionPSet.deltaPhiRegion = 0.3
hiRegitMixedTripletStepSeedsA.RegionFactoryPSet.RegionPSet.deltaEtaRegion = 0.3
hiRegitMixedTripletStepSeedsB.RegionFactoryPSet.RegionPSet.deltaPhiRegion = 0.3
hiRegitMixedTripletStepSeedsB.RegionFactoryPSet.RegionPSet.deltaEtaRegion = 0.3



