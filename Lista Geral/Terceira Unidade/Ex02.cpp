#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	
	cout << "Digite um numero inteiro: ";
	cin >> num1;
	cout << "Digite outro numero inteiro: ";
	cin >> num2;

	int soma = 0;
	if (num1 < num2) {
		for (int i = num1+1; i < num2; i++) {
			soma += i;
		}
		cout << "A soma entre " << num1 << " e " << num2 << ": " << soma << endl;
	}
	else if (num2 < num1) {
		for (int i = num2 + 1; i < num1; i++) {
			soma += i;
		}
		cout << "A soma entre " << num2 << " e " << num1 << ": " << soma << endl;
	}
	else {
		cout << "Nao ha intervalo de numeros\nOs Numeros sao iguais!\n";
	}

	system("pause");
	return 0;
}