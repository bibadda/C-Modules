#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <string>
# include <iostream>

# define F_NAME "First name : "
# define L_NAME "Last name : "
# define NICK "Nickname : "
# define TEL "Numberphone : "
# define SEC "Darksecret: "


class PhoneBook {
private:
	contact contact[8];
public:
	void    add_contact(void);
	void    list_contacts(void);
};

#endif