#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string  _type;

    public:
        Animal();
        Animal(const Animal& other);
        Animal(const std::string& type);
        Animal& operator=(const Animal& rhs);
        virtual ~Animal();

        std::string& getType(void);
        const std::string& getType(void) const;
        virtual void makeSound(void);
        virtual void makeSound(void) const;
};

#endif