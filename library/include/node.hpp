#ifndef NODE_HPP
#define NODE_HPP

#include <memory>
#include <vector>

struct Node
{
    void ComputeForwardPass();
    void AdjustWeights();
    double output;
    std::vector< std::shared_ptr<Node> > parents;
    std::vector<double> inputs;
    std::vector<double> weights;
};

#endif