#include<iostream>
using namespace std;

int main() {
	char a1, a2;
	cout << "������һ���ַ�" << endl;
	cin >> a1;
	if (a1 >= 97 && a1 <= 122) {
		a2 = a1 - 32;
		cout << "���ַ��Ĵ�дΪ��" << a2 << endl;
	}
	else {
		cout << "���ַ���ASCII��Ϊ��" << (int)a1 << endl;
	}
	return 0;
}