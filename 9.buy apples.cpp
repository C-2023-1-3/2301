#include<iostream>
using namespace std;

int main() {
	int j = 0;//��¼���� 
	double sum = 0;//�ܷ���
	int i;//��¼���칺�����
	for ( i = 2; i <= 100; i *= 2) {
		sum = sum + i * 0.8;
		j++;
	}
	i /= 2;
	sum -= 0.8 * i  ;
	double average = sum / j;
	cout << "�����" << i << "��ƻ��" << endl;
	cout << "the average money is:" << average << endl;
	return 0;
}
