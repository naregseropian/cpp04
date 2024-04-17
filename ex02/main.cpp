#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    {
        Animal *animals[10];

        for (int i = 0; i < 10; i++)
        {
            if (i % 2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }
        for (int i = 0; i < 10; i++)
        {
            delete animals[i];
        }
        std::cout << std::endl;
    }
    return (0);
}
