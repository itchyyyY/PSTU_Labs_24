#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "������� N: ";
	cin >> n;

	if (n > 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << "* ";
			}

			cout << endl;
		}
	}
	else
	{
		cout << "�������� � ����� �������� �� ����������.";
	}

	return 0;
}