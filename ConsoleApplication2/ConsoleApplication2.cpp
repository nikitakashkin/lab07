#include <iostream>
#include <string>	

using namespace std;

/*
int wiekszy(int a[], int n);

int main() {//zadanie 5
	int n;

	cout << "Jaki rozmiar tablicy chesz utworzyc?: ";
	cin >> n;

	int* tab = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Podaj " << i + 1 << " element tablicy: ";
		cin >> tab[i];
	}

	cout << "Najwiekszy element tablicy to: " << wiekszy(tab, n);

	return 0;
}
int wiekszy(int a[], int n) {//zadanie 5.1
	int max = 0;
	if (n == 1) {
		return a[0];
	}
	else {
		if ( a[n] > wiekszy(a, n - 1) ){
			return a[n];
		}
		else {
			return wiekszy(a, n - 1);
		}
	}
}
*/

/*
int wiekszy(int a[], int n) {zadanie 5.2
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > a[i + 1]) {
			max = a[i];
		}
	}
	return max;
}
*/


/*
string odwroc(string napis);

int main() {//zadnanie 4
	string napis, odwrotny;

	cout << "Podaj napis: ";
	getline(cin, napis);

	odwrotny = odwroc(napis);

	if (napis == odwrotny) {
		cout << "Napis jest palindromem.";
	}
	else {
		cout << "Napis nie jest palindromem.";
	}

	return  0;
}

string odwroc(string napis)
{
	string odwrotny;
	for (int i = napis.length() - 1; i >= 0; i--) {
		odwrotny += napis.substr(i, 1);
	}

	return odwrotny;
}
*/

/*
string odwroc(string napis);

int main() {//zadnanie 3
	string napis;

	cout << "Podaj napis: ";
	getline(cin, napis);

	cout << "Odwrocony napis: " << odwroc(napis);

	return  0;
}

string odwroc(string napis)
{
	string odwrotny;
	for (int i = napis.length() - 1; i >= 0; i--) {
		odwrotny += napis.substr(i,1);
	}

	return odwrotny;
}
*/
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