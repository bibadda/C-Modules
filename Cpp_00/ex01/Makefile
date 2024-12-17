CPP = c++ 

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRCS = main.cpp phonebook.cpp

OBJS = $(SRCS: .cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $> -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)