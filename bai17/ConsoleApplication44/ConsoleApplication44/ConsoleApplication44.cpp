// ConsoleApplication44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int  y, x;
    char pheptinh;
    cout << "Vui long nhap so hang thu nhat :";
    cin >> x;
    cout << "Vui long nhap phep tinh :";
    cin >> pheptinh;
    cout << "Vui long nhap so hang thu hai :";
    cin >> y;
    cout << "--------------------" << endl;
    switch (pheptinh) {
    case '+':
        cout << x << " " << pheptinh << " " << y << " = " << x + y << endl;
        break;
    case '-':
        cout << x << " " << pheptinh << " " << y << " = " << x - y << endl;
        break;
    case '*':
        cout << x << " " << pheptinh << " " << y << " = " << x * y << endl;
        break;
    case '/':
        if (y == 0) {
            cout << "Khong the thuc hien phep tinh " << endl;
        }
        else
            cout << x << " " << pheptinh << " " << y << " = " << fixed << setprecision(2) << double (x) / y << endl;
        break;
    default:

        cout << "Khong hop le  " << endl;
    }





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
