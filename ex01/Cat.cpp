#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Cat Constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    return;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Copy Cat Constructor called" << std::endl;
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
    return;
}

Cat::~Cat()
{
    std::cout << "Default Cat Destructor called" << std::endl;
    if (this->_brain)
        delete (this->_brain);
    return;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Copy Cat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound 🐱" << std::endl;
}

const std::string& Cat::think(int i) const
{
    return (_brain->getIdeas(i));
}