#include<iostream>
using namespace std;

int maxy(int &a, int &b) {
	int temp = 0;
	temp = a > b ? b : a;
	for (;; temp--) {
		if (a % temp == 0 && b % temp == 0) {
			return temp;
		}
	}
}

int main() {

	int a = 0, b = 0;
	cout << "������a��b" << endl;
	cin >> a;
	cin >> b;
	cout << "a��b�����Լ��Ϊ��" << maxy(a, b) << endl;
	system("pause");
	return 0;
}