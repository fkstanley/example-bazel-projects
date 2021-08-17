#include "main/greeting.hpp"
#include "lib/time.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string name = "Fiona";
    std::cout << greet(name) << std::endl;
    print_localtime();
}