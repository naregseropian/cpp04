#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
    : _type("WrongAnimal")
{
    std::cout << "Default WrongAnimal Constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    std::cout << "Param WrongAnimal Constructor called" << std::endl;
    _type = type;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Copy WrongAnimal Constructor called" << std::endl;
    *this = other;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal Destructor called" << std::endl;
    return;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal sound 🔊" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound 🔊" << std::endl;
}

std::string& WrongAnimal::getType(void)
{
    return (this->_type);
}

const std::string& WrongAnimal::getType(void) const
{
    return (this->_type);
}