#pragma once
#include"convert_from_KM_to_M.h"
#include"convert_from_ML_to_L.h"
#include"convert_from_T_to_KG.h"
class c_wrapper
{
	convert_from_KM_to_M* km_m;
	convert_from_ML_to_L* ml_l;
	convert_from_T_to_KG* t_kg;
public:
	c_wrapper()
	{
		km_m = nullptr;
		ml_l = nullptr;
		t_kg = nullptr;
	}
	void convert_from_km_to_m(double value)
	{
		km_m = new convert_from_KM_to_M(value);
		km_m->convert();
	}
	void convert_from_ml_to_l(double value)
	{
		ml_l = new convert_from_ML_to_L(value);
		ml_l->convert();
	}
	void convert_from_t_to_kg(double value)
	{
		t_kg = new convert_from_T_to_KG(value);
		t_kg->convert();
	}
	~c_wrapper()
	{
		delete this->km_m;
		delete this->ml_l;
		delete this->t_kg;
	}
};

