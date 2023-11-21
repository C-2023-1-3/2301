#include<iostream>
using namespace std;

int main() {
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;//英文字母，空格，数字，其他
	char c;
	cout << "请输入一串字符" << endl;
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
	cout << "英文字符有" << a1 << "个，数字字符有" << a2 << "个，空格有" << a3 << "个，其他字符有" << a4 <<"个。" <<endl;
	return 0;
}