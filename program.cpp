#include <iostream>
using namespace std;

int fib(int n){
	if(n <= 0) return 0;
	if(n == 1) return 1;

	int a = 0;
	int b = 1;
	for(int i = 2; i <= n; i++){
		int temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}

int main() {
	int wartosc;
	cout << "Wprowadz liczbe: \n";
	cin >> wartosc;
	if(wartosc < 0) {
		cout << "blad: liczba ujemna\n";
		return 1;
	}
	cout << "Wczyana liczba to: " << wartosc << '\n';
	cout << "Element Fibonacciego (" << wartosc << "): " << fib(wartosc) << '\n';
	return 0;
}
