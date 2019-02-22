#include <iostream>
using namespace std;
/*
Cada novo termo na sequência de Fibonacci é gerado por uma adição entre os dois
últimos termos. Começando com os números 1 e 2, os 10 primeiros termos serão:
1, 2, 3, 5, 8, 13, 21, 34, 55 e 89. Considerando todos os termos da sequência de
Fibonacci menores que quatro milhões, encontre a soma dos termos pares.
5.
*/

int main() {
	int num;
	long long soma = 0;
	cout << "Quantos Numeros Deseja na Sequencia? ";
	cin >> num;
	long long * fibo = new long long[num];
	int cont = 0;

	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < num; i++) { // fibonacci
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << "Numeros Da Sequencia: \n";
	for (int i = 0; i < num; i++) {
		cout << fibo[i] << " ";
		if (fibo[i] % 2 == 0) {
			soma += fibo[i];
		}
	}
	cout << "\nSoma Da Sequencia de " << num << " Numeros: " << soma << endl;
	cout << endl;
	
	system("pause");
	return 0;
}