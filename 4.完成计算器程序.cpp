#include<iostream>
using namespace std;
int main() {
	while (true) {
		cout << "������0��1" << endl;
		cout << "0--�˳�������" << endl;
		cout << "1--���м���" << endl;
		int j = 0;
		cin >> j;
		if (j == 1) {
			float a = 0, b = 0;
			char c;
			cout << "������һ����������������һ���������ʽ��" << endl;
			cout << "�磺1+1" << endl;
			cin >> a >> c >> b;
			if (c != '-' && c != '+' && c != '*' && c != '/') {
				cout << "������Ƿ�" << endl;
				cout << "" << endl;
			}
			else {
				if (c == '/' && b == 0) {
					cout << "��ĸ����Ϊ��" << endl;
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