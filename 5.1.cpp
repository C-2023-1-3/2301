#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:          // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time(int a,int b,int c) {
		hour = a;
		minute = b;
		sec = c;
	}
	void gainhour() {
		cout << this->hour << ":";
	}
	void gainminute() {
		cout << this->minute << ":";
	}
	void gainsec() {
		cout << this->sec << endl;
	}
};

int main() {
	int d_hour;
	int d_minute;
	int d_sec;
	cin >> d_hour;
	cin >> d_minute;
	cin >> d_sec;
	Time t1(d_hour,d_minute,d_sec);           //定义t1为Time类对象
	t1.gainhour();
	t1.gainminute();
	t1.gainsec();
	return 0;
}