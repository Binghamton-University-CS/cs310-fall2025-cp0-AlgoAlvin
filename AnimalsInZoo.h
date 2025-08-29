#pragma once
#include "Animal.h"

class AnimalsInZoo{
	public:
		AnimalsInZoo(Animal animalType);
		AnimalsInZoo();
		void display();
	private:
		Animal animal;
		int numAnimals;
};
