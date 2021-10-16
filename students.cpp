#include<iostream>
#include<string>

using namespace std;
int main() {
	int size;
	float avg, max = 0, min = 20, sum = 0;
	cin >> size;
	float* arr = new float[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
		sum += arr[i];
	}

	avg = sum / size;

	cout << "AVERAGE = " << avg << endl
		<< "Max = " << max << endl
		<< "MIN = " << min << endl;

	system("pause");
}