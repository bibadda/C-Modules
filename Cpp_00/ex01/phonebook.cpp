#include "PhoneBook.hpp"
# include <string>
# include <iostream>

int    valid_numberphone(std::string line)
{
    std::cout << line;
    for (int i =0; line[i]; i++)
    {
        if (line[i] <= '0' && line[i] >= '9')
            return 0;
    }
    return 1;
}

std::string get_line(std::string msg)
{
    std::string input;
    std::cout << msg;
    std::cin >> input;
    return input;
}

void    PhoneBook::add_contact(void)
{
    std::string contact_answer[5];
    std::string ask_contact_for[5] = {F_NAME, L_NAME, NICK, TEL, SEC};
    int i = 0;
    while (i < 5)
    {
        contact_answer[i] = get_line(ask_contact_for[i]);
        if (contact_answer[i].empty())
        {
            std::cout << "Empty line is invalide!" << std::endl;
            continue;
        }
        if (!valid_numberphone(contact_answer[i]) && i == 3)
        {
            std::cout << "invalide numberphone!";
            continue;
        }
        i++;
    }
    // for (int j = 0; j < 5; j++)
    //     std::cout << line[j] << std::endl;
}

void    PhoneBook::list_contacts(void)
{
   
}