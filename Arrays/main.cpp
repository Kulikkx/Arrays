#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, " ");
	cout << "Hello Arrays" << endl;

    int SIZE;
	cout << "������� ������ �������";
	cin >> SIZE;
	int arr[SIZE];
	cout << "�������" << SIZE << "��������� �������";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout<<"�������� �������"
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

 }
