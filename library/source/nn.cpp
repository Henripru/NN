#include "nn.hpp"

void NN::AddLayer(const Layer &layer)
{
    _layers.push_back(layer);
}

void NN::AddLayers(const std::vector<Layer> &layers)
{
    for (const Layer& layer : layers)
    {
        AddLayer(layer);
    }
}
