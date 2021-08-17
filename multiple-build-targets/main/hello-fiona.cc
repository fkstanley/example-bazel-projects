#include "greeting.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string name = "Fiona";
    std::cout << greet(name) << std::endl;
}