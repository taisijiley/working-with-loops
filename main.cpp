#include <iostream>
using namespace std;

/* ������ ��������� �������� �������� �������������*/

int main()
{
	setlocale(LC_ALL, "rus");
	int heightEnd = 1, widthEnd = 1;
	char abc;
	cout << "�������� ������ ��� �������������� = "; cin >> heightEnd;
	cout << "�������� ������ ��� �������������� = "; cin >> widthEnd;
	cout << "�������� ������ ��� ������ = "; cin >> abc;

	for (int heightStart = 1; heightStart <= heightEnd; heightStart++)
	{
		cout << " " << endl;
		for (int widthStart = 1; widthStart <= widthEnd; widthStart++)
		{
			cout << abc;
		}
	}
}