#include<iostream>
using namespace std;

int main() {
	float y = 0, x = 0;
	cout << "������x:" << endl;
	cin >> x;
	if (x <= 0 || x >= 10) {
		cout << "�������x���ڶ�������" << endl;
	}
	else {
		if (x > 0 && x < 1) {
			y = 3 -( 2 * x);
			cout << "y=" << y;
		}
		else {
			if (x >= 1 && x < 5) {
				y = 2/(4*x)+1;
				cout << "y=" << y;
			}
			else {
				y = x * x;
				cout << "y=" << y;
			}
		}
	}
	return 0;
}