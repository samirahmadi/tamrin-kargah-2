#include<iostream>
#include<string>
#include <ctime>

using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int size;
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		cout << fib(i) << " ";

	}
	system("pause");
}
