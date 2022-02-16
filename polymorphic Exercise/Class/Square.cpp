#include "Square.h"
#include <iostream>

void Square::perimeter()
{
	float perim = 0.0f;

	std::cout << "Enter the length of one side: ";
	std::cin >> sideLen;

	perim = sideLen * 4;

	std::cout << perim;
}

float Square::area()
{
	return 0.0f;
}
