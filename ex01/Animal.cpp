#include "Animal.hpp"

Animal::Animal()
    : _type("animal")
{
    std::cout << "Default Animal Constructor called" << std::endl;
    return;
}

Animal::Animal(const std::string& type)
{
    std::cout << "Param Animal Constructor called" << std::endl;
    _type = type;
    return;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy Animal Constructor called" << std::endl;
    *this = other;
    return;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Copy Animal assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Default Animal Destructor called" << std::endl;
    return;
}

void Animal::makeSound()
{
    std::cout << "Animal sound 🔊" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound 🔊" << std::endl;
}

std::string& Animal::getType(void)
{
    return (this->_type);
}

const std::string& Animal::getType(void) const
{
    return (this->_type);
}