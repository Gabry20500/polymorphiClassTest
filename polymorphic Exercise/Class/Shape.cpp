#include "Shape.h"
#include <iostream>

void Shape::perimeter()
{
	std::cout << "Enter the number of sides: ";
	std::cin >> sidesN;

	float* valS = new float[sidesN];
	float perim = 0.0f;
	for (int i = 0; i < sidesN; i++) {
		std::cout << "Value side number " <<i+1<< ':';
		std::cin >> valS[i];
		perim = perim + valS[i];
	}
	std::cout << "\n";

	std::cout << perim;
}