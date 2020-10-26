// Lab_03_4.cpp
// < Шкринда Володимир
// Лабораторна робота № 4.1
// Цикли.
// Варіант 22
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i, N;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = N;
	while (i <= 20)
	{
		S += ((cos(i) + sin(i)) / (1 + cos(i) * sin(i)));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = N;
	do {
		S += ((cos(i) + sin(i)) / (1 + cos(i) * sin(i)));
		i++;
	} while (i <= 20);
	cout << S << endl;
	S = 0;
	for (i = N; i <= 20; i++)
	{
		S += ((cos(i) + sin(i)) / (1 + cos(i) * sin(i)));
	}
	cout << S << endl;
	S = 0;
	for (i = 20; i >= N; i--)
	{
		S += ((cos(i) + sin(i)) / (1 + cos(i) * sin(i)));
	}
	cout << S << endl;
	
	cin.get();
	return 0;
}
