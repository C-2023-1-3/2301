#include<iostream>
using namespace std;

void swap(float* a,int len) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main() {
	float a[10];
	cout << "请输入十个数：" ;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	swap(a, 10);
	cout << "冒泡排序后：";
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}

	system("pause");
	return 0;
}