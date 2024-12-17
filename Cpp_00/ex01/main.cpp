#include "PhoneBook.hpp"
# include <string>
# include <iostream>

int main()
{
    std::string line;
    while (1){
        std::getline(std::cin, line);
        std::cout << line << std::endl;
    }
    return 0;
}