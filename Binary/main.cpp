#include<iostream>
using namespace std;

void main()
{
	setlocale (LC_ALL, "");
	int decimal; //���������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {}; // ���� ������ ����� ������� ������� ��������� �����
#ifdef VAR_1
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2; // �������� ������� ����� ��������� �����
		i++;// ��������� � ���������� �������
		decimal /= 2;  //������� ������� �������� ������ �� �����
	}
#endif // VAR_1
	int i = 0;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}