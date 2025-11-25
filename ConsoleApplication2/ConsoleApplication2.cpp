#include <iostream>
#include <string>	

using namespace std;

void choinka(int n, int i = 0);

int main() {//zadanie 1
	int n;
	cin >> n;
	choinka(n);

	return 0;
}

void choinka(int n, int i) {
	if (i <= n) {
		for (int a = 0; a <= (n-i+i/2); a++) {
			cout << " ";
		}
		for (int a = 0; a < i; a++) {
			cout << "*";
		}
		cout << endl;
		choinka(n, i + 1);
	}
}