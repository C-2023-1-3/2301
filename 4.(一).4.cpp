#include<iostream>
using namespace std;

void swap(int* a, int len) {
	for (int k = 0; k < len; k++) {
		for (int g = 0; g < len - k - 1; g++) {
			if (a[g] > a[g + 1]) {
				int temp = a[g];
				a[g] = a[g + 1];
				a[g + 1] = temp;
			}
		}
	}
}


int main() {
	int i = 0, j = 0, p = 0;
	int a[] = { 0 };
	int b[] = { 0 };
	int c[] = { 0 };

	//cout << "Enter list1: ";
	cout << "请输入list1的元素个数与元素：";
	cin >> i;
	for (int q = 0; q < i; q++){
		cin >> a[q];
		}

	//cout << "Enter list2: ";
	cout << "请输入list2的元素个数与元素：";
	cin >> j;
	for (int q = 0; q < j; q++) {
		cin >> b[q];
	}

	cout << "Enter list1: " << i << " ";
	for (int q = 0; q < i; q++) {
		cout << a[q]<<" ";
	}
	cout << endl;

	cout << "Enter list2: "<<j<<" ";
	for (int q = 0; q < j; q++) {
		cout << b[q] << " ";
	}
	cout << endl;
	
	for (int q = 0; q < i; q++) {
		c[q] = a[q];
	}
	for (int q = i,m=0; q < i + j; q++,m++) {
		c[q] = b[m];
	}

	swap(c,i+j);
	cout << "The merged list is：" ;
	for (int q = 0; q < i+j; q++) {
		cout << c[q] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}