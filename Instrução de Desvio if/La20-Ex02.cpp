#include <iostream>

using namespace std;

int main() {
	int a, b, soma = 0;

	cout << "Primeiro Valor: ";
	cin >> a;
	cout << "Segundo Valor: ";
	cin >> b;
	
	for (int i = a + 1; i <= (b - 1); i++) {
		soma += i;
	}
	cout << "Soma de todos os valores entre " << a << " e " << b << ": " << soma << endl;
	system("pause");
	return 0;
}