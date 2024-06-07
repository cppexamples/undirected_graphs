#pragma once
#include "../graph/graph.hpp"
#include <vector>

class TDepthFirstPaths{
    public:
    TDepthFirstPaths(TGraph G, int s);
    bool hasPathTo(int v);
    std::vector<int> pathTo(int v);

    private:
    bool *marked;
    int *edgeTo;
    const int s;
    void dfs(TGraph g, int v);
};