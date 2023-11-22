#include<iostream>
using namespace std;
int main() {
	double a=0, xi=0, xi1=0;
	cout << "请输入一个a值:" << endl;
	cin >> a;
	xi = a;
	xi1 = (xi + a / xi) / 2;
	while (fabs(xi1 - xi) >= 10e-5) {
		xi = xi1;
		xi1= (xi + a / xi) / 2;
	}
	cout << "平方根为：" << endl;
	cout << xi1;
	return 0;
}
