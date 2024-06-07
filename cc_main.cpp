#include <iostream>
#include "graph/graph.hpp"
#include "cc/cc.hpp"

int main(int argc, char *argv[])
{
    TGraph g{"../input/tinyg1.txt"};
    g.to_string();

    TCC cc(g);

    int M = cc.getCount(); // M is number of components
    std::cout << M << " components" << std::endl;

    std::vector<int> arrc[M]; // array of components
    for (int v = 0; v < g.getV(); v++)
    {
        arrc[cc.getId(v)].push_back(v);
    }

    for (int i = 0; i < M; i++)
    {
        for (int v : arrc[i])
        {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }
}
