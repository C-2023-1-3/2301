#include<iostream>
using namespace std;

int peach(int day) {
	if (day == 10) {
		return 1;
	}
	else {
		return (peach(day + 1) + 1) * 2;
	}
}

int main() {

	int day = 1;
	cout << "���ӵ�һ���ܹ�ժ��" << peach(day) << "�����ӡ�" << endl;

	system("pause");
	return 0;
}