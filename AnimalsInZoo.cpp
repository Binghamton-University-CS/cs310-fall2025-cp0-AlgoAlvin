#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animalType){
	animal = animalType;
	numAnimals = 1;
}
AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
}
void AnimalsInZoo::display(){
	cout<<"There is "<<numAnimals<<" animal."<<endl;
	if(numAnimals>0){
		animal.display();
	}
}
