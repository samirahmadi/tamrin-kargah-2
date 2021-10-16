#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main() {
	string str;
	cin >> str;
	int sum = 0;


	while (str != "exit") {
		int num = 0;
		stringstream stringToInt(str);
		stringToInt >> num;
		sum += num;
		cin >> str;
	}

	cout << sum << endl;

	system("pause");
}