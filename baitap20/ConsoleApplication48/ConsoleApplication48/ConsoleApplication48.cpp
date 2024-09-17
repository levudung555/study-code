// ConsoleApplication48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    string x,y;
    cout << "Chuong trinh quan ly sinh vien " << endl;
    cout << "Hay chon menu sau : " << endl;
    cout << "Nhap 01 : De xem danh sach sinh vien " << endl;    
    cout << "Nhap 02 : De them sinh vien " << endl;
    cout << "Nhap 03 : De xoa sinh vien " << endl;
    cout << "Nhap 04 : De sua sinh vien " << endl;
    cout << "Nhap 0  : De thoat khoi ung dung " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Vui long dien so :";
    cin >> n;
    cout << "-----------------------------------" << endl;
    switch (n) {
    case 1:
        cout << "ban da chon xem " << endl;
            break;
    case 2:
        cout << "Vui long nhap tên sinh viên :";
        cin >> x;
        cout << "Ban da nhap ten thanh cong " << endl;
        break;
    case 3:
        cout << "Ban da xoa sinh vien " << endl;
        break;
    case 4 :
        cout << "Ban da chon sua ten sinh vien " << endl;
        cout << "----------------------------" << endl;
        cout << "Vui long nhap tên sinh viên :";
        cin >> y;
        cout << "Ban da sua thong tin thanh cong " << endl;
        break;
    case 0:
        cout << "Ban da thoat khoi menu " << endl;
        break;
    default:
        cout << "Khong hop le ";
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
