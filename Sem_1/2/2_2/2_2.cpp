#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, prod = 1;

	cout << "������� N: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "���������� ��������� ������������ ����������� ����� ��� n <= 0";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			prod *= i;
		}

		cout << prod;
	}

	return 0;
}