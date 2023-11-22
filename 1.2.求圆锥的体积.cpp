#include<iostream>
using namespace std;
#define pi 3.14

int main() {
	cout << "请输入圆锥的底半径和锥高" << endl;
	int r = 0;
	int h = 0;
	cin >> r;
	cin >> h;
	float v = 0;
	v = (1.0/ 3) * pi * r * r * h;
	cout << "圆锥的体积是:" <<v<< endl;

	return 0;
}
