#include"3.4mytriangle.h"
#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	cout << "�����������ε����߳�" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1) {
		cout << "�����ε����Ϊ��" << area(a, b, c) << endl;
	}
	else cout << "�޷�����������" << endl;

	system("pause");
	return 0;
}