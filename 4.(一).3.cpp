#include<iostream>
using namespace std;

int main() {
	bool isopen[100] = {0};
	//i代表学生编号 j代表乘数
	for (int i = 1; i < 100; i++) {
		for (int j = 1; i * j <= 100; j++) {
			if (i * j > 100) {
				break;
			}
			isopen[i * j] = !isopen[i * j];
		}
	}
	cout << "开着的柜子编号为：";
	for (int i = 0; i <= 100; i++) {
		if (isopen[i] == 1) {
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}