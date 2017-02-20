#include "Animalia.h"
#include<iostream>

int Mammal::Speak()
{
	std::cout << "...melifluous noise...";
	return 0;
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}
