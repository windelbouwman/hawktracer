#ifndef HAWKTRACER_ANOMALY_SOURCE_CPP
#define HAWKTRACER_ANOMALY_SOURCE_CPP

#include "source.hpp"

namespace HawkTracer
{
namespace anomaly
{

bool Source::init(const std::string& file_name)
{
    if (!_file_loader.init(file_name))
    {
        return false;
    }

    _trees = _file_loader.get_trees();
    return true;
}

std::vector<std::pair<std::shared_ptr<client::CallGraph::TreeNode>, int>> Source::get_trees()
{
    return _trees;
}

} // namespace anomaly
} // namespace HawkTracer

#endif // HAWKTRACER_ANOMALY_SOURCE_CPP
