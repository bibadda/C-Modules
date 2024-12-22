#include "PhoneBook.hpp"
# include <string>
# include <iostream>

int main()
{
    PhoneBook phone;

    std::string line;
    while (1){
        std::cout << "ENTER YOUR CMD: ";
        std::getline(std::cin, line);
        if (line == "ADD")
        {
            // add_contact();
            phone.geter
        }
        // else if (line == "SEARCH")
        //     list_contacts();
        else if (line == "EXIT")
            exit (0);
    }
    return 0;
}