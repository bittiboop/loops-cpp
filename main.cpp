#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2;
	for (int i=0; i <= num2; i++) {
		cin >> num3;
		if (num3 >= num1 && num3 <= num2) {
			cout << "YES you get it";
			break;
		}
		else {
			cout << "NO you don't get it" << endl;
			continue;
		}
	}
	return 0;
}