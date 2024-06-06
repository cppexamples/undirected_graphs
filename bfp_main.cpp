#include <iostream>
#include "graph/graph.hpp"
#include "bfp/bfpaths.hpp"

int main(int argc, char *argv[])
{
    TGraph ug{"../tinyg2.txt"};
    ug.to_string();

    BreadthFirstPaths path(ug, 0);

    for (const int& i : path.pathTo(4))
    {
        if (i == 0)
        {
            std::cout << i;
        }else std::cout<< i <<"-";
    }
    std::cout<<std::endl;
}