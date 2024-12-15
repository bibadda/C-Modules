#include "PhoneBook.hpp"
# include <string>
# include <iostream>

int main()
{
    std::string str;
    phoneBook   contact("Bilal", "Badda");
    contact.first_name = "bilal";
    contact.last_name = "badda";
    std::cout << contact.first_name << std::endl;
	std::cout << contact.last_name << std::endl;
    while (1){
        std::cin.getline(str, str, 'p');
    }
    return 0;
}