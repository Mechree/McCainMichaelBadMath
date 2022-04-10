#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	float avg = i1 + i2 + i3;
	avg = avg / 3;

	return avg;
}

int main()
{
	int n1 = 0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: ";
	cin >> n1;
	cout << "Second number: "; 
	cin >> n2;
	cout << "Third number: ";
	cin >> n3;

	float avg = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << avg << endl;

	return 0;
}