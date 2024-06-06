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
    int getV();
    int getE();
    const std::vector<int>& getAdj(int v);


private:
int V; // number of vertices
    int E; // number of edges    
void init(int v);    
    std::vector<int> *adj;
};