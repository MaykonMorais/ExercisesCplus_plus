#include <iostream>
#include <string>
struct conta {
	short indetificador;
	char nome[40];
	int saldo;

};
using namespace std;
int main() {
	cout << "Seja Bem Vindo!\n";
	cout << "Para efetuar o cadastro da conta precisamos de alguns dados: \n";
	
	conta bradesco;
	bradesco.saldo = 0;
	cout << "Digite seu nome: ";
	cin.getline(bradesco.nome, 40);

	cout << "Seu Identificador: ";
	cin >> bradesco.indetificador;

	cout << "Conta Criada!\n";
	cout << "Qual o valor desejador para o deposito: R$ ";
	int deposito;
	cin >> deposito;

	bradesco.saldo += deposito;
	cout << "Saldo: R$ " << bradesco.saldo << endl;

	system("pause");
	return 0;
}