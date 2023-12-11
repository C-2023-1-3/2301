#include<iostream>
using namespace std;

void test(int *p,int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i-1; j++) {
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

}

int main(){

	int size;
	cout << "请输入数组元素个数：";
	cin >> size;
	int* p = new int[size];
	cout << "请输入" << size << "个元素：";
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}

	cout << "指针：" << p << "   " << "指针所指向的内容：" << *p << endl;

	test(p,size);
	cout << "排序后的数组：" << endl;
	for (int i = 0; i < size; i++) {
		cout << *(p+i) << "   ";
	}
	cout << endl;

	delete[]p;
	system("pause");
	return 0;
}