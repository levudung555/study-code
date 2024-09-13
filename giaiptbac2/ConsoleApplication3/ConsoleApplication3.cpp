// ConsoleApplication3.cpp : This file contains the 'main' function. Program edeltaecution begins and ends there.
//

#include <iostream>
#include <iomanip>       // khai báo thư viện mới
using namespace std;
int main()
{
	double a, b, c, x1, x2, delta;
	cout << "Vui long nhap gia tri cua a = ";
	cin >> a;
	cout << "Vui long nhap gia tri cua b = ";
	cin >> b;
	cout << "Vui long nhap gia tri cua c = ";
	cin >> c;
	// nếu a khác 0 lệnh bên dưới được thực hiện
	if (a != 0) {  
		// thực hiện biểu thức trong if
		delta = b * b - 4 * a * c;
		// nếu delta trên nhỏ hơn 0 thì lệnh trong if được thực hiện
		if (delta < 0) {
			cout << "Phuong trinh vo nghiem " << endl;
		}
		/* nếu không đúng điều kiện trên thì chương trình sẽ bỏ qua và chạy chương trình if tiếp theo
		   nếu delta = 0 thì biểu thức trong if được thực hiện   */
		else if (delta == 0) {
			// biểu thức được thực hiện 
			x1 = x2 = -b / 2 * a;
			cout << "Phuong trinh co nghiem kep x1=x2 = " << x1 << endl;
		}
		else {
			x1 = (-b + sqrt(delta)) / (2 * a); // sqrt dùng để biểu diển biểu thức có căn 
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co nghiem " << "x1 = " << fixed << setprecision(2) << x1 << " va " << "x2 =" << x2 << endl;
		}  // khi muốn thực hiện làm tròn biểu thức điến chữ số thập phân n ta cần dùng lệnh " << fixed << setprecision(n) "
	}
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem ";
			
			}
			else {
				cout << "Phuong trinh vo nghiem ";
			}
		}
		else {
			x1 = - c / b;
			
			cout << "Phuong trinh co nghiem x = " << fixed << setprecision(2) <<  x1  << endl;
		}
	}
}

		