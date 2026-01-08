# Nome do executável 
NAME		= megaphone

# Compilador e Flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Arquivos 
SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

# Regras Principais
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re