#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog Constructor called" << std::endl;
    this->_type = "Dog";
    return;
}

Dog::Dog(const std::string& type)
{
    std::cout << "Param Dog Constructor called" << std::endl;
    _type = type;
    return;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy Dog Constructor called" << std::endl;
    *this = other;
    return;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Default Dog Destructor called" << std::endl;
    return;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound 🐶" << std::endl;
}