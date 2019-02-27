#include <iostream>
using namespace std;

// MINI CALCULADORA
int main() {
	int num1, num2;
	char op;

	cout << "Digite dois numeros: ";
	cin >> num1 >> num2;
	cout << "Digite que operacao deseja ser feita:\n"
		"[a] MULTIPLICACAO\n"
		"[b] DIVISAO\n"
		"[c] ADICAO\n"
		"[d] SUBTRACAO\n"
		"[s] SAIR\n";
	cout << "Opcao: ";

	while (cin >> op, tolower(op) != 's') {
		switch (op)
		{
		case 'a':
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;
		case 'b':
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			break;
		case 'c':
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		case 'd':
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		default:
			cout << "Operacao Invalida!\n";
			break;
		}
		cout << "Opcao: ";
	}


	system("pause");
	return 0;
}
