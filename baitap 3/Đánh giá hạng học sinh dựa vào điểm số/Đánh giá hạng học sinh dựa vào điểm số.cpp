// Đánh giá hạng học sinh dựa vào điểm số.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double ktm, kt15, kt60, ktck, dtb;
    cout << "Moi nhap diem ktm : ";
    cin >> ktm;
    cout << "Moi nhap diem kt15 : ";
    cin >> kt15;
    cout << "Moi nhap diem kt60 : ";
    cin >> kt60;
    cout << "Moi nhap diem ktck : ";
    cin >> ktck;
    dtb = (ktm + kt15 + kt60 * 2 + ktck * 2) / 6;
    cout << "Diem cua  ban la : " << fixed << setprecision(2) << dtb << endl ;
   
    if (dtb >= 9) {
        cout << "Ban hoc luc gioi " << endl;
    }
    else if (dtb < 9 && dtb >= 7) {
        cout << "Ban hoc luc kha " << endl;
    }
    else if (dtb < 7 && dtb >= 5) {
        cout << "Ban hoc luc trung binh " << endl;
    }
    else {
        cout << "Ban hoc luc yeu " << endl;
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
