#pragma once
#include <iostream>;
using namespace std;

void Array()
{
	signed long int arr[5];
	cout << "Введите элементы массива:\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	signed long int min = 2147483647;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Минимальный элемент массива: " << min<<"\n";
}