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
			phone.add_contact();
		else if (line == "SEARCH")
			phone.list_contacts();
		else if (line == "EXIT")
			exit (0);
	}
	return 0;
}
