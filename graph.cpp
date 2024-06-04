#include "graph.hpp"
#include <iostream>
#include <fstream>
#include <ios>

void TGraph::init(int v)
{
    V = v;
    E = 0;
    adj = new std::vector<int>[V];
}

TGraph::TGraph(int v)
{
    init(v);
}

TGraph::TGraph(std::string filename)
{
    std::fstream fin(filename, std::fstream::in);
    if (!fin.is_open())
    {
        std::cerr << "Failed to open the file." << std::endl;
    }

    fin >> std::skipws >> V;
    init(V);
    fin >> std::skipws >> E;

    int v;
    int w;
    while (true)
    {
        if (!(fin >> std::skipws >> v))
            break;
        fin >> std::skipws >> w;
        addEdge(v,w);
    }
}

void TGraph::addEdge(int v, int w){    
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void TGraph::to_string()
{
    for (int i = 0; i < V; i++)
    {
        std::cout << i<< " =";
        for(const int &i:adj[i]){
            std::cout << " " << i;
        }
        std::cout<< std::endl;               
    }
};