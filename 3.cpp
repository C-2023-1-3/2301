#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int a, b, c;
		cout << "请输入三角形的三条边长:" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a + b <= c || a + c <= b || b + c <= a) {
			cout << "此三边无法构成三角形" << endl;
		}
		else {
			cout << "此三角形周长为：" << a + b + c << endl;
			if (a == b || b == c || a == c) {
				cout << "此三角形为等腰三角形" << endl;
			}
			else {
				cout << "此三角形不为等腰三角形" << endl;
			}
		}
	}
	return 0;
}