#include <iostream>
#include <cctype>
// precos
const double ALFACE = 1.25;
const double BETERRABA = 0.65;
const double CENOURA = 0.9;

// entrega
const double ENTREGA0_5KG = 3.5;
const double ENTREGA5_20KG = 10;
const double ENTREGA_MAIS20KG = 8;
const double DESCONTO = 0.95;

using namespace std;

int main(){
	// QUANTIDADE
	int alfKG = 0, betKG = 0, cenKG = 0;
	int SomaAlf = 0, SomaBet = 0, SomaCen = 0;
	char escolha;
	cout << "SUPERMERCADO ABC\n"
		"-----------------\n"
		"a) Alface \t R$ 1.25\n"
		"b) Betererraba \t R$ 0.65\n"
		"c) Cenoura \t R$ 0.90\n";
	cout << "Faca seu pedido usando as letras a, b, c (s para sair): ";

	while (cin >> escolha, tolower(escolha) != 's') {
		switch (escolha)
		{
		case 'a':
			cout << "Kg: ";
			cin >> alfKG;
			SomaAlf += alfKG;
			break;
		case 'b': 
			cout << "Kg: ";
			cin >> betKG;
			SomaBet += betKG;
			break;
		case 'c':
			cout << "Kg: ";
			cin >> cenKG;
			SomaCen += cenKG;
			break;
		default:
			cout << "Opcao Invalida!";
			if (escolha == 'a')
			continue;
		}
		cout << "SUPERMERCADO ABC\n"
			"-----------------\n"
			"a) Alface \t R$ 1.25\n"
			"b) Betererraba \t R$ 0.65\n"
			"c) Cenoura \t R$ 0.90\n";
		cout << "Faca seu pedido usando as letras a, b, c (s para sair): ";
	}

	 
	system("pause");
	return 0;
}