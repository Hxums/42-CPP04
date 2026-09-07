#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& src);
        Cat&   operator=(const Cat& rhs);
        ~Cat(void);
		virtual void    makeSound(void) const;
};

#endif