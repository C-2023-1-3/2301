#include<iostream>
using namespace std;

int main() {
	bool isopen[100] = {0};
	//i����ѧ����� j�������
	for (int i = 1; i < 100; i++) {
		for (int j = 1; i * j <= 100; j++) {
			if (i * j > 100) {
				break;
			}
			isopen[i * j] = !isopen[i * j];
		}
	}
	cout << "���ŵĹ��ӱ��Ϊ��";
	for (int i = 0; i <= 100; i++) {
		if (isopen[i] == 1) {
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}