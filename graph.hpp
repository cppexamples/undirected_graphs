#pragma once
#include <vector>
#include <string>

class TGraph
{
public:
    TGraph(int v);
    TGraph(std::string filename);
    void to_string();
    void addEdge(int v, int w);

private:
void init(int v);
    int V; // number of vertices
    int E; // number of edges
    std::vector<int> *adj;
};