#include "graph.hpp"

class BreadthFirstPaths
{
    BreadthFirstPaths(TGraph g, int s);
bool hasPathTo(int v);
std::vector<int> pathTo(int v);
private:
    bool *marked;
    int *edgeTo;
    const int s;
    void bfs(TGraph g, int s);
};
