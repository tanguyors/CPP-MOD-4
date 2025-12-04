#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "=== Test 1: Subject Main (Array of Animals) ===" << std::endl;
	
	const int arraySize = 4;
	Animal* animals[arraySize];

	for (int i = 0; i < arraySize / 2; i++)
		animals[i] = new Dog();
	
	for (int i = arraySize / 2; i < arraySize; i++)
		animals[i] = new Cat();

	std::cout << "\n--- Deleting Animals ---\n" << std::endl;
	
	// Ceci devrait appeler les destructeurs de Dog/Cat, puis de Brain, puis de Animal
	for (int i = 0; i < arraySize; i++)
		delete animals[i];


	std::cout << "\n=== Test 2: Deep Copy Proof ===" << std::endl;
	
	Dog basic;
	basic.getBrain()->ideas[0] = "I want a bone";
	
	{
		Dog tmp = basic; // Appel du constructeur de copie
		std::cout << "Basic Idea: " << basic.getBrain()->ideas[0] << " @ " << basic.getBrain() << std::endl;
		std::cout << "Tmp Idea: " << tmp.getBrain()->ideas[0] << " @ " << tmp.getBrain() << std::endl;
		
		// Si Deep Copy: les adresses des cerveaux sont différentes
		// Si Shallow Copy: les adresses sont identiques (et ça plantera au destructeur de tmp)
	}
	
	std::cout << "End of scope for tmp. Basic should still be alive and have its brain." << std::endl;
	std::cout << "Basic Idea check: " << basic.getBrain()->ideas[0] << std::endl;

	return 0;
}
