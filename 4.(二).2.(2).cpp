#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//stoi�������ã���n�����ַ���ת��Ϊʮ������

int parseHex(const char* const hexString)
{
	string name1;
	int size = strlen(hexString);

	for (int i = 0; i < size; i++)
	{
		name1 = name1 + hexString[i];
	}//���ַ�����ת��Ϊ�ַ���

	return stoi(name1, 0, 16);
}

int main()
{
	char hexString[] = { 0 };
	cout << "please input your string:";
	cin >> hexString;

	cout << "��ʮ������Ϊ��" << parseHex(hexString) << endl;

	system("pause");
	return 0;
}


