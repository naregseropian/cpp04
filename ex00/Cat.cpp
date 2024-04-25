#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Cat Constructor called" << std::endl;
    this->_type = "Cat";
    return;
}

Cat::Cat(const std::string& type)
{
    std::cout << "Param Cat Constructor called" << std::endl;
    _type = type;
    return;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Copy Cat Constructor called" << std::endl;
    *this = other;
    return;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Copy Cat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Default Cat Destructor called" << std::endl;
    return;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound 🐱" << std::endl;
}