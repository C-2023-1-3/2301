#include<iostream>
using namespace std;

int main() {
	int j = 0;//记录天数 
	double sum = 0;//总费用
	int i;//记录单天购买个数
	for ( i = 2; i <= 100; i *= 2) {
		sum = sum + i * 0.8;
		j++;
	}
	i /= 2;
	sum -= 0.8 * i  ;
	double average = sum / j;
	cout << "最多买" << i << "个苹果" << endl;
	cout << "the average money is:" << average << endl;
	return 0;
}
