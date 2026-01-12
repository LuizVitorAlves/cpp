#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int count = 4;
    Animal* animals[count];

    std::cout << "--- CREATING ANIMALS ---" << std::endl;
    for (int i = 0; i < count; i++) {
        if (i < count / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- TESTING DEEP COPY ---" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
        std::cout << "Tmp dog created as a copy of Basic" << std::endl;
    }
    
    std::cout << "Basic dog still exists, testing if its brain is intact..." << std::endl;
    basic.makeSound();

    std::cout << "\n--- DELETING ANIMALS ---" << std::endl;
    for (int i = 0; i < count; i++) {
        delete animals[i];
    }

    return 0;
}