#pragma once
#include "../graph/graph.hpp"

class TCC
{
public:
    TCC(TGraph g);
    int getCount();
    int getId(int v);
    bool isConnected(int v, int w);

private:
    bool *marked;
    int *id;
    int count;
    void dfs(TGraph g, int v);
};