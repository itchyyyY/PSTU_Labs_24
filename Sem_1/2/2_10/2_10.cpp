#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, tmp, max;

	cout << "������� ����� ������������������: ";
	cin >> n;

	cout << "������� ������ �����: ";
	cin >> max; 

	for (int i = 2; i <= n; i++)
	{
		cout << "������� ��������� �����: ";
		cin >> tmp;
		if (tmp > max) { max = tmp; }
	}

	cout << "������������ �������: " << max << endl;

	return 0;
}