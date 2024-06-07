#include <iostream>
#include "symbolgraph/symbolgraph.hpp"

int main(int argc, char *argv[])
{
    TSymbolGraph sg{"../input/routes.txt", " "};

    TGraph G=sg.getGraph();

    std::string source;
    while(std::getline(std::cin, source )){
        for (int w : G.getAdj(sg.getIndex(source))){
            std::cout<<"    "<< sg.getName(w)<< std::endl;
        }

    }
}