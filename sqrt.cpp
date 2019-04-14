#include <iostream>

using namespace std;

int sqrt(int x);

int main()
{
	double number;
	
	cout << "In this program, enter a number to find the square root.\n";
	cout << "Enter a number ";
	cin >> number;

	while (number != 0) {
		if (number < 0 )
		{
			break;
		}
		else
		{
			cout << sqrt(number);
		}
		cout << "\nEnter a number ";
		cin >> number;
	}
	system("PAUSE");
	return 0;
}

int sqrt(int x){
	int z;

	z = x % 2;
	
	return z;
}