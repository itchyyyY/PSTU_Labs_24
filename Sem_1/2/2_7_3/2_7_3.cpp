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
			cout << "* ";
		}
		cout << endl;

		for (int i = 1; i <= (n - 2); i++)
		{
			cout << "* ";
			for (int i = 1; i <= (n - 2); i++)
			{
				cout << "  ";
			}
			cout << "* " << endl;
		}

		for (int i = 1; i <= n; i++)
		{
			cout << "* ";
		}
	}
	else
	{
		cout << "������ ������� �������� �� ����������.";
	}

	return 0;
}