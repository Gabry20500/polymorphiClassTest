#include <iostream>
#include "Class/Shape.h"
#include "Class/Square.h"

int main()
{
	Shape sh = {};
	Square sq = {};
	char a = {};

	std::cout << "Is it a square?\n";
	std::cout << "yes or no\n";
	std::cin >> a;

	if (a == 'Y' || a == 'y') {
		sq.perimeter();
	}
	else if (a == 'N' || a == 'n') {
		sh.perimeter();
	}
	

	return 0;
}