#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int a, b, c;
		cout << "�����������ε������߳�:" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a + b <= c || a + c <= b || b + c <= a) {
			cout << "�������޷�����������" << endl;
		}
		else {
			cout << "���������ܳ�Ϊ��" << a + b + c << endl;
			if (a == b || b == c || a == c) {
				cout << "��������Ϊ����������" << endl;
			}
			else {
				cout << "�������β�Ϊ����������" << endl;
			}
		}
	}
	return 0;
}