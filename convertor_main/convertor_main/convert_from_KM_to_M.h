#pragma once
#include "convert_vitrual.h"
class convert_from_KM_to_M : public convert_vitrual
{
    double value;
public:
	convert_from_KM_to_M()
	{
		this->value = 0;
	}
	convert_from_KM_to_M(double value)
	{
		this->value = value;
	}
	void convert()override
	{
		std::cout << this->value << "KM   =   " << this->value * 1000 << "M\n";
	}
};

