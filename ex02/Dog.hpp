#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& rhs);
        
        void makeSound(void) const;
        void makeSound(void);
        const std::string& think(int i) const;
};

#endif