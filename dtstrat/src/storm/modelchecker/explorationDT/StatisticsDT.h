#ifndef STORM_MODELCHECKER_EXPLORATIONDT_EXPLORATION_DETAIL_STATISTICS_H_
#define STORM_MODELCHECKER_EXPLORATIONDT_EXPLORATION_DETAIL_STATISTICS_H_

#include <cstddef>
#include <iostream>

namespace storm {
namespace modelchecker {
namespace exploration_detail_dt {

template<typename StateType, typename ValueType>
class ExplorationInformationDT;

// A struct that keeps track of certain statistics during the exploration.
template<typename StateType, typename ValueType>
struct StatisticsDT {
    StatisticsDT();

    void explorationStep();

    void sampledPath();

    void updateMaxPathLength(std::size_t const& currentPathLength);

    void printToStream(std::ostream& out, ExplorationInformationDT<StateType, ValueType> const& explorationInformation) const;

    std::size_t pathsSampled;
    std::size_t pathsSampledSinceLastPrecomputation;
    std::size_t explorationSteps;
    std::size_t explorationStepsSinceLastPrecomputation;
    std::size_t maxPathLength;
    std::size_t numberOfTargetStates;
    std::size_t numberOfExploredStates;
    std::size_t numberOfPrecomputations;
    std::size_t ecDetections;
    std::size_t failedEcDetections;
    std::size_t totalNumberOfEcDetected;
};

}  // namespace exploration_detail
}  // namespace modelchecker
}  // namespace storm

#endif /* STORM_MODELCHECKER_EXPLORATIONDT_EXPLORATION_DETAIL_STATISTICS_H_ */
