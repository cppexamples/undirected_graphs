#include <iostream>
#include "graph/graph.hpp"
#include "dfs/dfsearch.hpp"
#include "dfp/dfpaths.hpp"

int main(int argc, char *argv[])
{
    TGraph ug{"../tinyg2.txt"};
    ug.to_string();

    TDepthFirstSearch search{ug, 0};
    for (int v = 0; v < ug.getV(); v++)
    {
        if (search.getMarked(v))
        {
            std::cout << v << " ";
        }
    }

    std::cout << std::endl;

    if (search.getCount() != ug.getV())
    {
        std::cout << "NOT" << std::endl;
    }
    else
    {
        std::cout << "TRUE" << std::endl;
    }

    TDepthFirstPaths path(ug, 0);
    for (int i : path.pathTo(3))
    {
        if (i == 0)
        {
            std::cout << i;
        }else std::cout<<"-"<< i;
    }
    std::cout<<std::endl;
}