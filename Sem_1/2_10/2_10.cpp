#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, tmp, max = 0;
	cout << "������� ���������� ����� � ������������������: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		if (tmp > max) { max = tmp; }
	}

	cout << "������ ������������ ������� �����: " << max;

	return 0;
}