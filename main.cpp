#include <iostream>
using namespace std;

/* Данная программа позволит рисовать прямоугольник*/

int main()
{
	setlocale(LC_ALL, "rus");
	int heightEnd = 1, widthEnd = 1;
	char abc;
	cout << "Напишите высоту для прямоугольника = "; cin >> heightEnd;
	cout << "Напишите ширину для прямоугольника = "; cin >> widthEnd;
	cout << "Выберите символ для вывода = "; cin >> abc;

	for (int heightStart = 1; heightStart <= heightEnd; heightStart++)
	{
		cout << " " << endl;
		for (int widthStart = 1; widthStart <= widthEnd; widthStart++)
		{
			cout << abc;
		}
	}
}