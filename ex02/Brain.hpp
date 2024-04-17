#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        ~Brain();
        
        Brain& operator=(const Brain& rhs);

        std::string& getIdeas(int i);
        const std::string& getIdeas(int i) const;
};

#endif