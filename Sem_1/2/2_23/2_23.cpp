#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float n, a, max;
	int i = 2, count = 1;

	cout << "������� n: ";
	cin >> n;

	max = sin(n + 1 / n);

	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			count = 1;
		}
		else if (a == max) { count++; }
		i++;
	}

	cout << "������������ �������: " << max << endl;
	cout << "��������, ����������� � ������������: " << count << endl;

	return 0;
}