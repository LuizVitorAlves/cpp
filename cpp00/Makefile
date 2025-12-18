# Nome do executável 
NAME		= megaphone

# Compilador e Flags [cite: 23, 24]
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Arquivos 
SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

# Regras Principais [cite: 64]
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony para evitar conflitos com arquivos de mesmo nome
.PHONY: all clean fclean re