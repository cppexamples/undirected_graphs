#pragma once
#include "graph.hpp"

class TDepthFirstSearch
{
public:
    TDepthFirstSearch(TGraph g, int s);
    bool getMarked(int w);
    int getCount();

private:
    void dfs(TGraph g, int v);
    bool *marked;
    int count;
};