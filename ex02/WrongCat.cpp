#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat Constructor called" << std::endl;
    this->_type = "WrongCat";
    return;
}

WrongCat::WrongCat(const std::string& type)
{
    std::cout << "Param WrongCat Constructor called" << std::endl;
    _type = type;
    return;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "Copy WrongCat Constructor called" << std::endl;
    *this = other;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << "Copy WrongCat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat Destructor called" << std::endl;
    return;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound 🐱" << std::endl;
}