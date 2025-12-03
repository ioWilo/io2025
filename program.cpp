#include <iostream>
using namespace std;

int main() {
	int wartosc;
	cout << "Wprowadz liczbe: \n";
	cin >> wartosc;
	if(wartosc < 0) {
		cout << "blad: liczba ujemna\n";
		return 1;
	}
	cout << "Wczyana liczba to: " << wartosc << '\n';
	return 0;
}
