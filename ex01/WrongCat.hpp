#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& src);
        WrongCat&   operator=(const WrongCat& rhs);
        ~WrongCat(void);
		void    makeSound(void) const;
};

#endif