#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size);

int main()
{
	int a = 10, b = 20;
	int n;

	b = ++a;
	cout << b << "\n";
	a = (a > b) ? 3 : -3;
	cout << a << "\n";
	a = 10;
	a = a + b % 3 + 4;
	cout << a << "\n";
	b >>= 2;
	cout << b << "\n";
}
