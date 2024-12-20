#include "PhoneBook.hpp"
# include <string>
# include <iostream>

void    add_contact(void)
{
    std::string line;
    std::getline(std::cin, line);
    

}

int main()
{
    std::string line;
    while (1){
        std::cout << "ENTER YOUR CMD: ";
        std::getline(std::cin, line);
        if (line == "ADD")
        {
            std::cout << "Your First Name: ";
            std::getline(std::cin, line);
            PhoneBook contact = PhoneBook(line, "badda");
            // contact.print();
        }
        else if (line == "SEARCH")
            std::cout << line << std::endl;
        else if (line == "EXIT")
            exit (0);
    }
    return 0;
}