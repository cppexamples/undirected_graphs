#include "dfsearch.hpp"
#include <iostream>

TDepthFirstSearch::TDepthFirstSearch( TGraph g, int s) {
    marked= new bool[g.getV()];
    for (int i=0; i<g.getV(); i++) marked[i]=false;
    dfs(g,s);    
}

void TDepthFirstSearch::dfs(TGraph g, int v)
{
    marked[v]=true; 
    count++;
    for (const int& w: g.getAdj(v)) {
        if (!marked[w]) dfs(g,w);
    }
}

bool TDepthFirstSearch::getMarked(int w){
    return marked[w];
}
int TDepthFirstSearch::getCount(){
    return count;
};
