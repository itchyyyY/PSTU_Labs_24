#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, sum = 0;
	cout << "������� n-� ���������: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1) { sum -= i; }
		else { sum += i; }
	}
	cout << "����� ����� " << sum;

	return 0;
}