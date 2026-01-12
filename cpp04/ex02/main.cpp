#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "--- 1. TESTE DE INSTANCIAÇÃO ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n--- 2. TESTE DE SONS ---" << std::endl;
    std::cout << j->getType() << " diz: ";
    j->makeSound();
    std::cout << i->getType() << " diz: ";
    i->makeSound();

    std::cout << "\n--- 3. TESTE DE DEEP COPY ---" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->getBrain()->ideas[0] = "Quero osso";
    
    Dog* copyDog = new Dog(*originalDog);
    std::cout << "Original Idea 0: " << originalDog->getBrain()->ideas[0] << std::endl;
    std::cout << "Copy Idea 0: " << copyDog->getBrain()->ideas[0] << std::endl;

    originalDog->getBrain()->ideas[0] = "Quero dormir";
    std::cout << "--- Apos mudar a ideia do original ---" << std::endl;
    std::cout << "Original Idea 0: " << originalDog->getBrain()->ideas[0] << std::endl;
    std::cout << "Copy Idea 0: " << copyDog->getBrain()->ideas[0] << " (Deve continuar sendo 'Quero osso')" << std::endl;

    std::cout << "\n--- 4. LIMPANDO MEMORIA ---" << std::endl;
    delete i;
    delete j;
    delete originalDog;
    delete copyDog;

    std::cout << "\n--- 5. TESTE DO ARRAY DE ANIMAIS ---" << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for (int k = 0; k < 4; k++) {
        delete animals[k];
    }

    return 0;
}