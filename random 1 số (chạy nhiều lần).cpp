#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int a, b, random, choose;

	do
	{
		cout << "Chuong trinh se random 1 so trong khoang a va b; a, b la so nguyen" << endl;
		cout << "Nhap a = "; cin >> a;
		cout << "Nhap b = "; cin >> b;

		srand(time(NULL));

		if (a < b) {
			random = rand() % (b - a + 1) + a;
		}

		else {
			random = rand() % (a - b + 1) + b;
		}

		cout << "So random la " << random << endl << endl;

		cout << "Ban co muon tiep tuc khong? " << endl;
		cout << "1: Co" << endl << "2: Khong" << endl << "Chon: "; cin >> choose;

		system("cls");

	} while (choose == 1);

	system("pause");
	return 0;
}
