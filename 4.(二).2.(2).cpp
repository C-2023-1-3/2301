#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//stoi函数作用：将n进制字符串转化为十进制数

int parseHex(const char* const hexString)
{
	string name1;
	int size = strlen(hexString);

	for (int i = 0; i < size; i++)
	{
		name1 = name1 + hexString[i];
	}//把字符数组转换为字符串

	return stoi(name1, 0, 16);
}

int main()
{
	char hexString[] = { 0 };
	cout << "please input your string:";
	cin >> hexString;

	cout << "其十进制数为：" << parseHex(hexString) << endl;

	system("pause");
	return 0;
}


