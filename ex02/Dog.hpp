#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &rhs);
		virtual ~Dog();

		virtual void makeSound() const;
		// Fonction utilitaire pour tester la deep copy (optionnelle mais utile)
		Brain* getBrain() const;
};

#endif
