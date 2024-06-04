#include <iostream>
#include "graph.hpp"


int main(int argc, char* argv[]){
std::cout<<"Hallo!"<< std::endl;
TGraph ug{"../tinyg.txt"};
ug.to_string();

}