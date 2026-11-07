#include <iostream>
#include <string>

int cin_test()
{
    std::string name;

    std::getline(std::cin, name);

    std::cout << name << '\n';

    return 0;
}