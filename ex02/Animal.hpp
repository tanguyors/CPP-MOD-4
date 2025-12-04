#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type; // Protected pour que Dog et Cat puissent y accéder

	public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);
		
		// Le destructeur DOIT être virtuel.
		// Sinon, si on supprime un Dog via un pointeur Animal*,
		// le destructeur de Dog ne sera pas appelé -> Fuite de mémoire.
		virtual ~Animal();

		// Pure Virtual Function -> Rend la classe Abstraite
		virtual void makeSound() const = 0;

		std::string getType() const;
};

#endif
