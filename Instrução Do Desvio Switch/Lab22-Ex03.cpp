#include <iostream>
// PREÇOS
const double MACARRONADA = 2.5;
const double FEIJOADA = 5.75;
const double SALADA = 3.5;

struct prato {
	char nome[30];
	double preco;
};
using namespace std;
int main() {
	double soma = 0;
	prato cardapio[3] = {
		{"Macarronada", 2.5},
		{"Feijoada", 5.75},
		{"Salada", 3.5}
	};

	cout << "Escolha o que deseja:\n"
		"[a] Macarronada\t R$ 2,5\n"
		"[b] Feijoada\t R$ 5,75\n"
		"[c] Salada\t R$ 3,5\n"
		"[s] Sair\n";
	cout << "Digite a opcao desejada: \n";
	char ch;
	while (cin >> ch, tolower(ch) != 's') {
		
		switch (ch)
		{
		case 'a':
			soma += MACARRONADA;
			cout << "Pedido Realizado!\n";
			break;
		case 'b':
			soma += FEIJOADA;
			cout << "Pedido Realizado!\n";
			break;
		case 'c':
			soma += SALADA;
			cout << "Pedido Realizado!\n";
			break;
		default:
			cout << "Opcao invalida" << endl;
			break;
		}
		cout << "Escolha o que deseja:\n"
			"[a] Macarronada\t R$ 2,5\n"
			"[b] Feijoada\t R$ 5,75\n"
			"[c] Salada\t R$ 3,5\n"
			"[s] Sair\n";
		cout << "Digite a opcao desejada: \n";
	}

	cout << "Total A Pagar: R$ " << soma << endl;
	system("pause");
	return 0;
}