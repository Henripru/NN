#include "node.hpp"

#include <Eigen/Core>

void Node::ComputeForwardPass()
{
    output = 0.0;
    for (size_t index = 0; index < parents.size(); ++index)
    {
        output += weights[index] * parents[index]->output;
    }
}

void Node::AdjustWeights()
{

}
