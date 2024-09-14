// ConsoleApplication31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b , min ,ucln =1;
	cout << "Vui long nhap so 1 :";
	cin >> a;
	cout << "Vui long nhap so 2 :";
	cin >> b;
	if (a == 0 && b == 0) {
		cout << "khong co uoc chung lon nhat " << endl;
	}
	else if (a != 0 && b == 0) {
		cout << "uoc chung lon nhat la " << abs(a) << endl;
	}
	else if (a == 0 && b != 0) {
		cout << "uoc chung lon nhat la " << abs(b) << endl;
	}
	else {
		if (a < b) {
			min = a;
		}
		else {
			min = b;
		}
	}for (int i = 1; i <= min; i++) {
		if (a % i == 0 && b % i == 0) {
			ucln = i;
		}
	}cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
