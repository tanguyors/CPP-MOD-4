#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== Testing Animal, Dog, Cat (Polymorphism) ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "J Type: " << j->getType() << " " << std::endl;
	std::cout << "I Type: " << i->getType() << " " << std::endl;
	
	std::cout << "--- Sounds ---" << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "--- Destruction ---" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "=== Testing WrongAnimal, WrongCat (No Polymorphism) ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
	
	std::cout << "--- Sounds ---" << std::endl;
	wrongCat->makeSound(); // Will output WrongAnimal sound because makeSound is NOT virtual
	wrongMeta->makeSound();

	std::cout << "--- Destruction ---" << std::endl;
	delete wrongMeta;
	delete wrongCat;

	return 0;
}
