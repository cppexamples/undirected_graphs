#include "bfpaths.hpp"
#include <queue>

BreadthFirstPaths::BreadthFirstPaths(TGraph g, int s) : s{s}
{
    marked = new bool[g.getV()];
    for (int i = 0; i < g.getV(); i++)
        marked[i] = false;
    edgeTo = new int[g.getV()];
    bfs(g,s);
}

void BreadthFirstPaths::bfs(TGraph g, int s){
    std::queue<int> q;
    marked[s]=true;
    q.push(s);
    while(!q.empty()){
        int v= q.front(); q.pop();
        for (int w: g.getAdj(v)){
            if(!marked[w]){
                edgeTo[w]=v;
                marked[w]=true;
                q.push(w);
            }
        }
    }
}

bool BreadthFirstPaths::hasPathTo(int v){
    return marked[v];
}

std::vector<int> BreadthFirstPaths::pathTo(int v){
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