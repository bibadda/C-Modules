#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class contact{
private:
	std::string first_name;
	std::string  last_name;
	std::string  nickName;
    std::string	phonenumber;
	std::string  darkestsecret;
public:
	void	setFirstname(std::string firstname);
	void	setLastname(std::string lastname);
	void	setNickname(std::string nickname);
	void	setPhonenum(std::string phonenum);
	void	setDarkestsecret(std::string secret);

	std::string	getFirstname();
	std::string	getLastname();
	std::string	getNickname();
	std::string	getPhonenum();
	std::string	getDarkestsecret();
};

#endif