#pragma once
#include <iostream>;
using namespace std;
int  sum(unsigned long int *pa, int *pb);

void firstfunction()
{
	unsigned long int a; cout << "������� ������ �����:";  cin >> a;
	int b; cout << "������� ������ �����:";  cin >> b;
	int result = sum(&a, &b);
	cout << "��������� = " << result << "\n"; 
	cout << "������ ������: " << sizeof(result) <<" byte\n";
	cout << "---------------------------------\n";
	cout << "������� � ������ ���� (double):\n";
	cout << "������ ������:  " << sizeof((double)(result)) << " byte\n";
	cout << "\n";
	cout << "\n";
}
int sum(unsigned long int *pa, int *pb)
{
	int c;
	c = (*pa) + (*pb);
	return c;
}

