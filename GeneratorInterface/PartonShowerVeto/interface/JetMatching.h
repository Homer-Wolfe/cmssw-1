#ifndef GeneratorInterface_PartonShowerVeto_JetMatching_h
#define GeneratorInterface_PartonShowerVeto_JetMatching_h

#include <memory>
#include <vector>
#include <string>
#include <set>

#include <boost/shared_ptr.hpp>

#include <HepMC/GenEvent.h>
#include <HepMC/SimpleVector.h>

#include "FWCore/ParameterSet/interface/ParameterSet.h"

namespace lhef {

class LHERunInfo;
class LHEEvent;
class JetInput;
// class JetClustering;
}

namespace gen {

class JetMatching {
    public:
	JetMatching(const edm::ParameterSet &params);
	virtual ~JetMatching();

	struct JetPartonMatch {
		JetPartonMatch(const HepMC::FourVector	&parton,
		               const HepMC::FourVector	&jet,
		               double			delta,
		               int			pdgId) :
			parton(parton), jet(jet),
			delta(delta), pdgId(pdgId) {}

		JetPartonMatch(const HepMC::FourVector	&parton,
		               int			pdgId) :
			parton(parton),	delta(-1.0), pdgId(pdgId) {}

		JetPartonMatch(const HepMC::FourVector &jet) :
			jet(jet), delta(-1.0), pdgId(0) {}

		inline bool isMatch() const { return delta >= 0 && pdgId; }
		inline bool hasParton() const { return pdgId; }
		inline bool hasJet() const { return delta >= 0 || !pdgId; }

		HepMC::FourVector	parton;
		HepMC::FourVector	jet;
		double			delta;
		int			pdgId;
	};

	virtual void init(const lhef::LHERunInfo* runInfo);
	virtual void beforeHadronisation(const lhef::LHEEvent* event);
	virtual void beforeHadronisationExec();

	virtual int match(const HepMC::GenEvent *partonLevel,
	                  const HepMC::GenEvent *finalState,
	                  bool showeredFinalState = false) = 0;

	virtual std::set<std::string> capabilities() const;
	
	void resetMatchingStatus() { fMatchingStatus = false; }
	bool isMatchingDone() { return fMatchingStatus; }

	const std::vector<JetPartonMatch> &getMatchSummary() const
	{ return matchSummary; }

	static std::auto_ptr<JetMatching> create(
					const edm::ParameterSet &params);

    protected:
        bool fMatchingStatus;
	std::vector<JetPartonMatch>	matchSummary;
};

} // namespace gen


#endif // GeneratorCommon_PartonShowerVeto_JetMatching_h
