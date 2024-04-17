#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string  _type;

    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        virtual ~WrongAnimal();

        std::string& getType(void);
        const std::string& getType(void) const;
        virtual void makeSound(void);
        virtual void makeSound(void) const;
};

#endif