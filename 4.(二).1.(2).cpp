#include<iostream>
using namespace std;

int main()   //C语言程序，要了解
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;   //将数组a首地址送给p
    for (i = 0; i < 3; i++) {
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
    }
    //a是数组名，表示数组首地址，(p + i)表示数组中第i个元素的地址，* (p + i) 相当于a[i]}
    //与cout功能差不多
    return 0;
}

