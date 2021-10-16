#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main() {
	string str, hour, minute, second;
	int h, m, s;
	cin >> str;

	if (str[2] != ':' || str[5] == ':') {
		hour = str.substr(0, 2);
		minute = str.substr(3, 2);
		second = str.substr(6, 2);
		if (hour[0] == '0')
			hour = hour[1];
		if (minute[0] == '0')
			minute = minute[1];
		if (second[0] == '0')
			second = second[1];

		stringstream HourtoInt(hour);
		HourtoInt >> h;

		stringstream MinutetoInt(minute);
		MinutetoInt >> m;

		stringstream SecondtoInt(second);
		SecondtoInt >> s;

		int sum = (h * 60 * 60) + (m * 60) + s;

		cout << sum << endl;
	}
	else
		cout << "Time is not valid!" << endl;
	system("pause");

}