#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, " ");
	cout << "Hello Arrays" << endl;

    int SIZE;
	cout << "¬ведите размер массива";
	cin >> SIZE;
	int arr[SIZE];
	cout << "¬ведите" << SIZE << "элементов массива";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout<<"Ёлементы массива"
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

 }
