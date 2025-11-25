#include <iostream>
#include <string>	

using namespace std;

/*
int sum(int n, int suma = 0);

int main() {//zadanie 2.1
	cout << "Podaj liczbe: ";
	int n;
	cin >> n;
	cout<<"wynik: "<< sum(n);
	return 0;
}

int sum(int n, int suma) {
	for (int i = 1; i <= n; i++) {
		suma += i;
	}
	return suma;
}
*/
/*
int sum(int n) { zadanie 2.2
	if (n == 0) {
		return 0;
	}
	else {
		return n + sum(n - 1);
	}
}
*/


/*
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
*/