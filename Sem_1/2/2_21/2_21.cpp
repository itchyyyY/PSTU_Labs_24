#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	bool zero_flag = false, order_flag = true;
	int tmp, tmp1;

	cout << "������� ������������������ (0 - ��������� ������������������): " << endl;
	cin >> tmp;

	while (!zero_flag)
	{
		cin >> tmp1;
		if (tmp1 == 0) { zero_flag = true; }
		else if (tmp1 > tmp) { tmp = tmp1; }
		else { order_flag = false; }
	}

	if (order_flag) { cout << "����� � ������������������ ����������� �� �����������."; }
	else { cout << "����� � ������������������ �� �����������."; }

	return 0;
}