#pragma once
#include <iostream>;
using namespace std;
int  sum(unsigned long int *pa, int *pb);

void firstfunction()
{
	unsigned long int a; cout << "Введите первое число:";  cin >> a;
	int b; cout << "Введите второе число:";  cin >> b;
	int result = sum(&a, &b);
	cout << "Результат = " << result << "\n"; 
	cout << "Размер памяти: " << sizeof(result) <<" byte\n";
	cout << "---------------------------------\n";
	cout << "Приведём к новому типу (double):\n";
	cout << "Размер памяти:  " << sizeof((double)(result)) << " byte\n";
	cout << "\n";
	cout << "\n";
}
int sum(unsigned long int *pa, int *pb)
{
	int c;
	c = (*pa) + (*pb);
	return c;
}

