#pragma once
#include <iostream> 

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal ();
		WrongAnimal(const WrongAnimal &wa);
		virtual ~WrongAnimal();
		WrongAnimal& operator= (const WrongAnimal & assign);
		std::string getType() const;
		void	makeSound() const;
};