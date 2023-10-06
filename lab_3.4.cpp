// Lab_03_4.cpp
// < Бандрівський Денис Юрійович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 1

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі

	if ((pow(y,2)<=pow(R,2)-pow(x,2) && (x>=0) && (y>=x)) || ((pow(y, 2) <= pow(R, 2) - pow(x, 2) && (x <= 0) && (y <= x))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
