#include<iostream>
using namespace std;

int main() {
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;//Ӣ����ĸ���ո����֣�����
	char c;
	cout << "������һ���ַ�" << endl;
	cin >> c;
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			a1++;
		}
		else {
			if(c==' ') {
				a2++;
			}
			else {
				if(c>='0'&&c<='9') {
					a3++;
				}
				else {
					a4++;
				}
			}
		}
	}
	cout << "Ӣ���ַ���" << a1 << "���������ַ���" << a2 << "�����ո���" << a3 << "���������ַ���" << a4 <<"����" <<endl;
	return 0;
}