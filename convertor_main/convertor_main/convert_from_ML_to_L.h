#pragma once
#include "convert_vitrual.h"
class convert_from_ML_to_L : public convert_vitrual
{
	double value;
public:
	convert_from_ML_to_L()
	{
		this->value = 0;
	}
	convert_from_ML_to_L(double value)
	{
		this->value = value;
	}
	void convert()override
	{
		std::cout << this->value << "ML   =   " << this->value * 0.001 << "L\n";
	}
};

