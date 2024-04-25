#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = std::string("a new idea");
    return;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Copy Brain Constructor called" << std::endl;
    *this = other;
    return;
}

Brain::~Brain()
{
    std::cout << "Default Brain Destructor called" << std::endl;
    return;
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Copy Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (this != &rhs)
            this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}

std::string& Brain::getIdeas(int i)
{
    return (_ideas[i]);
}

const std::string& Brain::getIdeas(int i) const
{
    return (_ideas[i]);
}