#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog Constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
    return;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy Dog Constructor called" << std::endl;
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
    return;
}

Dog::~Dog()
{
    std::cout << "Default Dog Destructor called" << std::endl;
    if (this->_brain)
        delete (this->_brain);
    return;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound 🐶" << std::endl;
}

void Dog::makeSound(void)
{
    std::cout << "Dog sound 🐶" << std::endl;
}

const std::string& Dog::think(int i) const
{
    return (_brain->getIdeas(i));
}