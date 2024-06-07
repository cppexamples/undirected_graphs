#include "cc.hpp"

TCC::TCC(TGraph g)
{
    marked = new bool[g.getV()];
    for (int i = 0; i < g.getV(); i++)
        marked[i] = false;

    id = new int[g.getV()];
    for (int s = 0; s < g.getV(); s++)
    {
        if (!marked[s])
        {
            dfs(g, s);
            count++;
        }
    }
}

void TCC::dfs(TGraph g, int v)
{
    marked[v] = true;
    id[v] = count;
    for (int w : g.getAdj(v))
    {
        if (!marked[w])
            dfs(g, w);
    }
}

bool TCC::isConnected(int v, int w)
{
    return id[v] == id[w];
}

int TCC::getId(int v)
{
    return id[v];
}

int TCC::getCount()
{
    return count;
}
