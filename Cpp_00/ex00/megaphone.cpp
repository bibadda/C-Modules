// #include <ctype.h>
#include <iostream>

int main(int ac, char **av)
{
	int		i;
	int		j;
	int		index;

	if (ac >= 2)
	{
		i = 1;
		index = 0;
		while (++index < ac)
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}