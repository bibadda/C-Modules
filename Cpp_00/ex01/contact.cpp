#include "PhoneBook.hpp"
#include "contact.hpp"
# include <string>
# include <iostream>

void	contact::setFirstname(std::string firstname){
	first_name = firstname;
}
void	contact::setLastname(std::string lastname){
	last_name = lastname;
}
void	contact::setNickname(std::string nickname){
	nickName = nickname;
}
void	contact::setPhonenum(std::string phonenum){
	phonenumber = phonenum;
}
void	contact::setDarkestsecret(std::string secret){
	darkestsecret = secret;
}
std::string	contact::getFirstname(){
	return first_name;
}
std::string	contact::getLastname(){
		return last_name;
}
std::string	contact::getNickname(){
		return nickName;
}
std::string	contact::getPhonenum(){
		return phonenumber;
}
std::string	contact::getDarkestsecret(){
		return darkestsecret;
}