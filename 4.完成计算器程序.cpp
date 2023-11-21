#include<iostream>
using namespace std;
int main() {
	while (true) {
		cout << "请输入0或1" << endl;
		cout << "0--退出计算器" << endl;
		cout << "1--进行计算" << endl;
		int j = 0;
		cin >> j;
		if (j == 1) {
			float a = 0, b = 0;
			char c;
			cout << "请输入一个包含两个数字与一个运算符的式子" << endl;
			cout << "如：1+1" << endl;
			cin >> a >> c >> b;
			if (c != '-' && c != '+' && c != '*' && c != '/') {
				cout << "运算符非法" << endl;
				cout << "" << endl;
			}
			else {
				if (c == '/' && b == 0) {
					cout << "分母不能为零" << endl;
					cout << "" << endl;
				}
				else {
					switch (c) {
					case '+':
						cout << a << "+" << b << "=" << a + b << endl;
						cout << "" << endl;
						break;
					case '-':
						cout << a << "-" << b << "=" << a - b << endl;
						cout << "" << endl;
						break;
					case '*':
						cout << a << "*" << b << "=" << a * b << endl;
						cout << "" << endl;
						break;
					case '/':
						cout << a << "/" << b << "=" << a / b << endl;
						cout << "" << endl;
						break;
					default:
						cout << "" << endl;
						break;
					}
				}
			}
		}
		else {
			if (j == 0) {
				break;
			}
			else {
				continue;
			}
		}
	}
	return 0;
}