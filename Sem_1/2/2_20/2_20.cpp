#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float n, s, a;
	bool flag = false;
	int i = 1;

	cout << "������� n � s:" << endl;
	cin >> n >> s;

	while (i <= n && !flag)
	{
		a = round(sin(n + i / n));
		if (a == s)
		{
			cout << "������� ������" << endl;
			flag = true;
		}
		else { i++; }
	}

	if (!flag) { cout << "������� �� ������ !" << endl; }

	return 0;
}