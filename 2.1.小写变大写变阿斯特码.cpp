#include<iostream>
using namespace std;

int main() {
	char a1, a2;
	cout << "请输入一个字符" << endl;
	cin >> a1;
	if (a1 >= 97 && a1 <= 122) {
		a2 = a1 - 32;
		cout << "该字符的大写为：" << a2 << endl;
	}
	else {
		cout << "该字符的ASCII码为：" << (int)a1 << endl;
	}
	return 0;
}
