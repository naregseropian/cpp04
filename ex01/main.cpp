#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;//should not create a leak
        delete i;
    }
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
    {
        Cat j = Cat();
        Cat k = Cat(j);

        std::cout << std::endl;

        for (int i = 0; i < 1; i++)
        {
            std::cout << j.think(i) << std::endl;
            std::cout << k.think(i) << std::endl;
        }
    }
    return (0);
}
