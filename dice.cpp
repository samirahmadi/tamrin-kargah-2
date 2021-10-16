#include<iostream>
#include<string>
#include <ctime>

using namespace std;
int main() {
	int randomNumber = 0;
	do {
		srand((unsigned)time(0));

		randomNumber = (rand() % 6) + 1;
		cout << randomNumber << endl;
	} while (cin.get() == '\n' && randomNumber);
	system("pause");

}