#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class PhoneBook {
private:
	std::string first_name;
	std::string  last_name;
	std::string  mickname;
public:
	PhoneBook(std::string f_name, std::string  l_name);
	void	print();
};

#endif