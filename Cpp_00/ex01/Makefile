CPP = g++ 

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRCS = phonebook.cpp

OBJS = $(SRCS : .cpp=.o)

all : $(NAME)

NAME : $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $> -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)