#include<iostream>
using namespace std;

bool isprime(int num) {
	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	bool isprime(int num);
	int i = 0, sum = 0;
		for (i=1;sum<200;i++) {
			if (isprime(i)) {
				cout << i << "\t" ;
				sum++;
				if (sum % 10 == 0) {
					cout << endl;
				}
			}
		}
	system("pause");
	return 0;
}