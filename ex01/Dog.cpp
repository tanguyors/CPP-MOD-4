#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	// Deep Copy: On crée un nouveau Brain qui est une copie de celui de src
	this->brain = new Brain(*src.brain);
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		// On supprime l'ancien cerveau avant d'en créer un nouveau pour éviter les fuites
		delete this->brain;
		// Deep Copy
		this->brain = new Brain(*rhs.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}
