#include<iostream>
using namespace std;
int main() {
	double a=0, xi=0, xi1=0;
	cout << "������һ��aֵ:" << endl;
	cin >> a;
	xi = a;
	xi1 = (xi + a / xi) / 2;
	while (xi1 - xi >= 10e-5) {
		xi = xi1;
		xi1= (xi + a / xi) / 2;
	}
	cout << "ƽ����Ϊ��" << endl;
	cout << xi1;
	return 0;
}