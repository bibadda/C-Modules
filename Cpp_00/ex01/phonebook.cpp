#include "PhoneBook.hpp"
# include <string>
# include <iostream>

int main()
{
    phoneBook   contact("Bilal", "Badda");
    contact.first_name = "bilal";
    contact.last_name = "badda";
    std::cout << contact.first_name << std::endl;
	std::cout << contact.last_name << std::endl;
    std::getline();
    return 0;
}