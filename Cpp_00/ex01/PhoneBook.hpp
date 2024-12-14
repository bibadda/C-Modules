#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class phoneBook {
public:
	std::string first_name;
	std::string  last_name;
	std::string  mickname;
	int phone_number;
	int secret;
	phoneBook(std::string f_name, std::string  l_name){
		first_name = f_name;
		last_name = l_name;
	};
	void	print()
	{
		std::cout << first_name << std::endl;
		std::cout << last_name << std::endl;
	}
};

#endif