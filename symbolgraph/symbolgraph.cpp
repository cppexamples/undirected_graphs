#include "symbolgraph.hpp"
#include <fstream>
#include <iostream>
#include <ios>
#include "../function/function.hpp"

TSymbolGraph::TSymbolGraph(std::string filename, std::string delimeter)
{
    std::fstream fin1(filename, std::fstream::in);
    if (!fin1.is_open())
    {
        std::cerr << "Failed to open the file." << std::endl;
    }

    std::string v1;

    while (true)
    {
        if (!(fin1 >> std::skipws >> v1))
            break;
        if (!st.contains(v1))
        {
            st.emplace(v1, st.size());
        }
    }
    keys = new std::string[st.size()];
    for (auto const &[key, val] : st)
    {
        keys[val] = key;
    }

    G = TGraph(st.size());

    std::fstream fin2(filename, std::fstream::in);
    if (!fin2.is_open())
    {
        std::cerr << "Failed to open the file." << std::endl;
    }

    std::string str;
    std::string vstr;
    int vint;
    while (std::getline(fin2, str))
    {
        auto strings = split_string(str, delimeter);
        vstr = strings.front();
        strings.erase(strings.begin());
        vint = st.at(vstr);

        for (const auto &w : strings)
        {
            G.addEdge(vint, st.at(w));
        }
    }
}