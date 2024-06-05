#include <iostream>
#include "graph.hpp"
#include "dfsearch.hpp"

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

    if (search.getCount()!=ug.getV()) {
        std::cout<<"NOT"<<std::endl;        
    } else {
        std::cout<<"TRUE"<<std::endl;        
    }
}