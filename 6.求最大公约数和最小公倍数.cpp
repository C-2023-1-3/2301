#include<iostream>
using namespace std;

int min(int x, int y) {
	int t = 0;
	if (x >= y) {
		t = y;
	}
	else t = x;
	return t;
}
int max(int x, int y) {
	int t = 0;
	if (x >= y) {
		t = x;
	}
	else t = y;
	return t;
}
int main() {
	int a = 0, b = 0, t = 0, q = 0;
	cout << "����������������" << endl;
	cin >> a >> b;
	t = min(a, b);
	while (a % t != 0 || b % t != 0) {
		--t;
	}
	cout << "���Լ��Ϊ��" << t << endl;
	q = max(a, b);
	while (q % a != 0 || q % b != 0) {
		++q;
	}
	cout << "��С������Ϊ��" << q << endl;
	return 0;
}