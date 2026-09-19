NAME    = materia
CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS    = AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  main.cpp  MateriaSource.cpp
OBJS    = $(SRCS:.cpp=.o)
HEADERS = AMateria.hpp  Character.hpp  Cure.hpp  Ice.hpp  ICharacter.hpp  IMateriaSource.hpp  MateriaSource.hpp

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