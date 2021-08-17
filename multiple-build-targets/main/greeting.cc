#include "greeting.hpp"
#include <iostream>

std::string greet(const std::string &name)
{
    std::string greeting = "Hello " + name;
    return greeting;
}