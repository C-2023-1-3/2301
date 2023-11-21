#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	float i = 0;
	cout << "请输入华氏温度：" << endl;
	cin >> i;
	cout << "摄氏温度为：" <<setprecision(3)<< (5.0 / 9) * (i - 32) << endl;

	return 0;
}