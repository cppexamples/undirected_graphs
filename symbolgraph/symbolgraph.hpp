#pragma once
#include<string>
#include"../graph/graph.hpp"
#include<map>

class TSymbolGraph{
    public:
    TSymbolGraph(std::string filename, std::string delimeter);
    bool contains(std::string key);
    int getIndex(std::string  key);
    TGraph getGraph();
    private:
    std::map<std::string,int> st;
    std::string *keys;
    TGraph G{0};
};