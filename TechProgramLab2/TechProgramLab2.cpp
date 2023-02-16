﻿// TechProgramLab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
unsigned long int a;
int b;
signed long int arr[5];
void firstfunction();//Объявление функции firstfunction
void Array();//Объявление функции Array
int  sum(unsigned long int* pa, int* pb);//Объявление функции sum

int main()
{
	setlocale(LC_ALL, "Russian");
	bool action = true;
	int choice;
	cout << "Выберете номер дальнейшего действия:\n";
	while (action)
	{
		cout << "1.Выполнить задание №1\n";
		cout << "2.Выполнить задание №2\n";
		cout << "3.Закрыть программу\n";
		cin >> choice;//Переменная выбора пользователя
		system("CLS");
		switch (choice) //В зависимости от выбора выполняется соответсвующая функция
		{
			case 1: firstfunction(); break;
			case 2: Array(); break;
			case 3: action = false; break;
			default:
			cout << "Выберете номер дальнейшего действия(Нажмите 1 или 2 или 3:)\n";
			break;
		}
		cout << "\n";
	}
}
void firstfunction() 
{
	cout << "Введите первое число:";  cin >> a;
	cout << "Введите второе число:";  cin >> b;
	int result = sum(&a, &b);
	cout << "Результат = " << (double)result << "\n";
	cout << "Размер памяти: " << sizeof(result) << " byte\n";
	cout << "---------------------------------\n";
	cout << "Приведём к новому типу (double):\n";
	cout << "Размер памяти:  " << sizeof((double)(result)) << " byte\n";
	cout << "\n";
	cout << "\n";
}
int sum(unsigned long int* pa, int* pb)
{
	int c;
	c = (*pa) + (*pb);
	return c;
}
void Array()
{
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
	cout << "Минимальный элемент массива: " << min << "\n";
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
