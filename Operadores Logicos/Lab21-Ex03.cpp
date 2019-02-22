#include <iostream>
using namespace std;

/* Crie um programa que recebe um número inteiro maior que zero e determina se
ele é um número primo ou não.*/

int main() {
	int a, b;
	cin >> a >> b;
	int soma = 0;

	for (int i = a; i < b; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			soma += i;
		}
	}
	cout << "A soma e : " << soma << endl;
	system("pause");
	return 0;
}