#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "������� N: ";
	cin >> n;

	if (n > 2)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "N - ����������� ����� ������ 2.";
	}

	return 0;
}