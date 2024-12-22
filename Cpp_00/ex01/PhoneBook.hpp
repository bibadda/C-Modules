#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <string>
# include <iostream>

class PhoneBook {
private:
	contact *contact[8];
public:
	PhoneBook();
	void	print();
	void    save_contact_info(std::string msg);
	void    add_contact(void);
	void    list_contacts(void);
};

#endif