#pragma once
#include "Shape.h"

class Square : public Shape {
public:
	void perimeter() override;
	float area();
protected:
	float sideLen = 0;
};

