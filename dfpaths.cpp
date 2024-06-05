#include "dfpaths.hpp"

TDepthFirstPaths::TDepthFirstPaths(TGraph g, int s) : s{s}
{
    marked = new bool[g.getV()];
    for (int i = 0; i < g.getV(); i++)
        marked[i] = false;
    edgeTo = new int[g.getV()];
    dfs(g, s);
}

bool TDepthFirstPaths::hasPathTo(int v)
{
    return marked[v];
}

std::vector<int> TDepthFirstPaths::pathTo(int v)
{
    std::vector<int> path;
    if (!hasPathTo(v))
        return path;
    for (int x = v; x != s; x = edgeTo[x])
    {
        path.push_back(x);
    }
    path.push_back(s);
    return path;
}

void TDepthFirstPaths::dfs(TGraph g, int v)
{
    marked[v] = true;
    for (const int &w : g.getAdj(v))
    {
        if (!marked[w])
        {
            edgeTo[w] = v;
            dfs(g, w);
        }
    }
}