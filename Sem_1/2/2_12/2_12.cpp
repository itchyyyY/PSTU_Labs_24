#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, tmp, min, max;
	cout << "������� N: ";
	cin >> n;

	cin >> tmp;
	min = tmp;
	max = tmp;

	for (int i = 2; i <= n; i++)
	{
		cin >> tmp;
		if (tmp > max) { max = tmp; }
		else if (tmp < min) { min = tmp; }
	}

	cout << "����� ������������� � ������������ ��������� ������������������ ����� " << max + min;

	return 0;
}