#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain*       brain_;
    public:
        Dog();
        Dog(const Dog& src);
        Dog&   operator=(const Dog& rhs);
        virtual ~Dog(void);
        virtual void makeSound(void) const;
        Brain*   getBrain();
};

#endif