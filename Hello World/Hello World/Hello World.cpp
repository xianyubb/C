#include <iostream>
using namespace std;


int main() {

	for (int i = 1; i < 10; i++) {
		for (int  j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	 };

	/*int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;

	for (int i = 1; i < 1000; i++) {
		num1 = i % 10;
		num2 = i /10 % 10;
		num3 = i / 100 % 10;
		if (num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3== i) {
			cout << i << endl;
		};
	};*/









	system("pause");

	return 0;
}