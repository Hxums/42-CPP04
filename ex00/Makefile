NAME    = animal
CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS    = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS    = $(SRCS:.cpp=.o)
HEADERS = Animal.hpp Dog.hpp Cat.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Règle pour lier les objets aux headers
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re