/* Chương trình random số
   Nhập 2 số a và b,
   Chương trình sẽ random 1 số trong khoảng a và b */

#include <iostream>
#include <cstdlib> // Dùng cho hàm rand
#include <ctime> // Dùng cho hàm time

using namespace std;

int main() {

	int a, b, random, choose;

	do
	{
		cout << "Chuong trinh se random 1 so trong khoang a va b; a, b la so nguyen" << endl;
		cout << "Nhap a = "; cin >> a;
		cout << "Nhap b = "; cin >> b;

		srand(time(NULL)); // Random 1 số bằng thời gian

		if (a < b) {
			random = rand() % (b - a + 1) + a; // Lấy giá trị random chia dư (b-a+1) rồi cộng a để có giá trị trong khoảng a và b (a<b)
		}

		else {
			random = rand() % (a - b + 1) + b; // Lấy giá trị random chia dư (a-b+1) rồi cộng b để có giá trị trong khoảng a và b (a>b)
		}

		cout << "So random la " << random << endl;
		cout << "Ban co muon tiep tuc khong? " << endl;
		cout << "1: Co" << endl << "2: Khong" << endl << "Chon: "; cin >> choose;

		system("cls");

	} while (choose == 1);

	system("pause");
	return 0;
}
