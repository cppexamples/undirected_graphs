#include <iostream>
#include "graph.hpp"
#include "dfsearch.hpp"

int main(int argc, char *argv[])
{
    TGraph ug{"../tinyg1.txt"};
    ug.to_string();

    int checkv=0;
    std::cout << "vertex " << checkv << " has adj ";
    auto adj = ug.getAdj(checkv);
    for (const int &i : adj)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    checkv=6;
    std::cout << "vertex " << checkv << " has adj ";
    adj = ug.getAdj(checkv);
    for (const int &i : adj)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;



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
    }
}