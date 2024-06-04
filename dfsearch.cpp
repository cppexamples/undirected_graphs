#include "dfsearch.hpp"

TDepthFirstSearch::TDepthFirstSearch( TGraph g, int s) {
    marked= new bool[g.getV()];
    dfs(G,s);
}

TDepthFirstSearch::dfs(TGraph g, int v)
{
    marked[v]=true;
    count++;
    for (const int& w: g.getAdj(v)) {
        if (!marked[w]) dfs(G,W)
    }

}