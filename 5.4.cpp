#include<iostream>
using namespace std;

class student {
private:
	int num;
	int score;
public:
	student(int d_num, int d_score) {
		num = d_num;
		score = d_score;
	}
	int getnum() {
		return num;
	}
	int getscore() {
		return score;
	}
};

int max(student *p) {
	int ret = p[0].getnum();
	for (int i = 0; i < 4; i++) {
		if (p[i + 1].getscore() > p[i].getscore()) {
			ret = p[i + 1].getnum();
		}
	}
	return ret;
}

int main() {
	student exp[5] = {
		student(1,70),student(2,88),student(3,77),
		student(4,60),student(5,89)
	};

	cout << "最高分学生的学号为：" << max(exp) << endl;

	system("pause");
	return 0;
}