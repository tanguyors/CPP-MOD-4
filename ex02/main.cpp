#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// Test 1: Trying to instantiate Animal directly
	// Animal test; // This would cause a compilation error: "cannot declare variable 'test' to be of abstract type 'Animal'"
	// Animal* test2 = new Animal(); // This is also forbidden.

	std::cout << "=== Abstract Class Test ===" << std::endl;
	std::cout << "Creating Dog and Cat..." << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n--- Sounds ---" << std::endl;
	j->makeSound();
	i->makeSound();

	std::cout << "\n--- Destruction ---" << std::endl;
	delete j;
	delete i;

	return 0;
}
