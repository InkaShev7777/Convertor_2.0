#include <iostream>
#include"c_wrapper.h"
using namespace std;
int main()
{
	c_wrapper* wrapper = new c_wrapper();
	int ch;
	double value;
	do
	{
		cout << "\t\t\tMenu\n";
		cout << "1 - Convert from KM to M\n";
		cout << "2 - Convert from T to KG\n";
		cout << "3 - Convert from ML to L\n";
		cout << "0 - Exit\n";
		cout << "Enter your choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			cout << "Enter value: ";
			cin >> value;
			wrapper->convert_from_km_to_m(value);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cout << "Enter value: ";
			cin >> value;
			wrapper->convert_from_t_to_kg(value);
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "Enter value: ";
			cin >> value;
			wrapper->convert_from_ml_to_l(value);
			system("pause");
			system("cls");
			break;
		}

	} while (ch != 0);
	delete wrapper;
}