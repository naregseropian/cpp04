#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& rhs);
        
        void makeSound() const;
        const std::string& think(int i) const;
};

#endif