#include<iostream>
using namespace std;

void count(const char s[],int counts[]) {
	for (int i = 0; i <strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			counts[(int)(s[i] - 97)]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			counts[(int)(s[i] - 65)]++;
		}
		else continue;
	}
	for (int j = 0; j < 25; j++) {
		if (counts[j] != 0) {
			cout << (char)(j + 97) << "£º" << counts[j] << "times";
			cout << endl;
		}
	}
}

int main() {

	int counts[26] = { 0 };
	cout << "Enter a string: ";

	char s[999] = { 0 };
	cin.getline(s, 999);

	count(s, counts);

	system("pause");
	return 0;
}