CPP = c++ 

CFLAGS =  -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRCS = main.cpp phonebook.cpp contact.cpp 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)