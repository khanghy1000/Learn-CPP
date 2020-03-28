/* Chương trình random số
   Nhập 2 số a và b (a < b),
   Chương trình sẽ random 1 số trong khoảng a và b */

#include <iostream>
#include <cstdlib> // Dùng cho hàm rand
#include <ctime> // Dùng cho hàm time
using namespace std;

int main() {
	int a, b,random;
	cout << "Chuong trinh random 1 so trong khoang a va b (a < b), a va b la" << endl << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
	srand(time(NULL)); // Random 1 số bằng thời gian
	if (a < b) {
		random = rand() % (b - a + 1) + a; // Lấy giá trị random chia dư (b-a+1) rồi cộng a để có giá trị trong khoảng a và b (a<b)
	}
	else {
		random = rand() % (a - b + 1) + b; // Lấy giá trị random chia dư (a-b+1) rồi cộng b để có giá trị trong khoảng a và b (a>b)
	}
	cout << "So random la " << random << endl;

	system("pause");
	return 0;
}
