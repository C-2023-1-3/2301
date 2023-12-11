#include"3.4mytriangle.h"
#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	cout << "请输入三角形的三边长" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1) {
		cout << "三角形的面积为：" << area(a, b, c) << endl;
	}
	else cout << "无法构成三角形" << endl;

	system("pause");
	return 0;
}