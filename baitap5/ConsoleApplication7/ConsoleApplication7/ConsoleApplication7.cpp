// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double g1, g2, g3, sum;
    cout << "Vui long nhap goc 1 : ";
    cin >> g1;
    cout << "Vui long nhap goc 2 : ";
    cin >> g2;
    cout << "Vui long nhap goc 3 : ";
    cin >> g3;
    sum = g1 + g2 + g3;
   
        if (g1 != 0 && g2 != 0 && g3 != 0&&sum ==180 ) {
            cout << "tam giac co lan luot 3 goc la " << g1 << "," << g2 << "," << g3 << " la hop le";
        }

    else {
        cout << "tam giac co lan luot 3 goc la " << g1 << "," << g2 << "," << g3 << " la khong hop le";
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
