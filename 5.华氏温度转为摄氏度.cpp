#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	float i = 0;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> i;
	cout << "�����¶�Ϊ��" <<setprecision(3)<< (5.0 / 9) * (i - 32) << endl;

	return 0;
}