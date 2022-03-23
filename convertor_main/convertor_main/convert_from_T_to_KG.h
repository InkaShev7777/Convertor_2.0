#pragma once
#include<iostream>
#include "convert_vitrual.h"
class convert_from_T_to_KG : public convert_vitrual
{
	double value;
public:
	convert_from_T_to_KG()
	{
		this->value = 0;
	}
	convert_from_T_to_KG(double value)
	{
		this->value = value;
	}
	void convert() override
	{
		std::cout << this->value << "T   =   " << this->value * 1000 << "KG\n";
	}

};

