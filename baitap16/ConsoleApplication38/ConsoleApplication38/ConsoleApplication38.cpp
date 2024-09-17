// ConsoleApplication38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

    using namespace std;

    int main()
    {
        int  n;
        cout << "Nhap thang bang so :";
        cin >> n;
        cout << "--------------------------" << endl;
        switch (n) {
        case 1:
            cout << "January - thang 1" << endl;
            break;
        case 2:
            cout << "February - thang 2" << endl;
            break;
        case 3:
            cout << "March - thang 3" << endl;

            break;
        case 4:
            cout << "April - thang 4  " << endl;
            break;
        case 5:
            cout << "May - thang 5 " << endl;
            break;
        case 6:
            cout << "June - thang 6" << endl;
            break;
        case 7:
            cout << "July - thang 7" << endl;
            break;
        case 8:
            cout << "August - thang 8" << endl;
            break;
        case 9:
            cout << "Septemper - thang 9" << endl;
            break;
        case 10 :
            cout << "October - thang 10" << endl;
            break;
        case 11:
            cout << "November - thang 11" << endl;
            break;
        case 12 :
            cout << "December - thang 12" << endl;
            break;
        default:
            cout << "Thang vua nhap khong hop le  " << endl;
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
