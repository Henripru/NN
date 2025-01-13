#ifndef NN_HPP
#define NN_HPP

#include "layer.hpp"

class NN
{
public:
    void AddLayer(const Layer& layer);
    void AddLayers(const std::vector<Layer>& layers);

private:
    std::vector<Layer> _layers;
};

#endif