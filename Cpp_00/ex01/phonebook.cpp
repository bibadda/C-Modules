#include "PhoneBook.hpp"
# include <string>
# include <iostream>

PhoneBook::PhoneBook(std::string f_name, std::string  l_name){
	first_name = f_name;
	last_name = l_name;
};
void	PhoneBook::print()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
}
