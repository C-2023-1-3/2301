#include<iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
	if (s1[0] == 0) {
		return 0;
	}
	for (int i = 0; i < strlen(s2); i++) {
		int j = 0;
		for (j = 0; j < sizeof(s1); j++) {
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
		if (s1[j] == 0) {
			return i;
		}
	}
	return -1;
}

int main() {
	char s1[999];
	char s2[999];
	cout << "Enter the first string: ";
	cin.getline(s1, 999);
	cout << "Enter the second string: ";
	cin.getline(s2, 999);
	cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is " << indexOf(s1, s2) << endl;

	system("pause");
	return 0;
}