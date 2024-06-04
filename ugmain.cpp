#include <iostream>
#include "graph.hpp"

int main(int argc, char *argv[])
{
    TGraph ug{"../tinyg.txt"};
    ug.to_string();
    auto adj = ug.adjget(0);
    for (const int &i : adj)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}