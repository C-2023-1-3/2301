#include<iostream>
using namespace std;

int main()   //C���Գ���Ҫ�˽�
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;   //������a�׵�ַ�͸�p
    for (i = 0; i < 3; i++) {
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
    }
    //a������������ʾ�����׵�ַ��(p + i)��ʾ�����е�i��Ԫ�صĵ�ַ��* (p + i) �൱��a[i]}
    //��cout���ܲ��
    return 0;
}

