#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class PhoneBook {
public:
	std::string first_name;
	std::string  last_name;
	std::string  mickname;
	int phone_number;
	int secret;
	PhoneBook(std::string f_name, std::string  l_name);
	void	print();
};

#endif