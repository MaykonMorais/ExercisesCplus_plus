#include <iostream>
using namespace std;

struct livro {
	char nome[30];
	char editora[30];
	short ano;
};
struct jogo {
	char nome[30];
	char desenvol[30];
	short ano;
};
int main() {
	jogo emprestado1[100];
	livro emprestado2[100];
	short op;
	const short livro = 1, jogo = 0;
	
	cout << "Deseja que produto emprestado\n[0] Jogo\n[1] Livro: ";
	cin >> op;

	if (op == jogo) {
		cout << "Voce Escolheu Um Jogo: \n";
		cout << "Digite as informacoes Do Jogo Desejado: " << endl;
		
		cin.get();
		cout << "------------------------------\n";
		cout << "Nome: ";
		cin.getline(emprestado1[0].nome, 30);
		cout << "Desenvolvedora: ";
		cin.getline(emprestado1[0].desenvol, 30);
		cout << "Ano: ";
		cin >> emprestado1[0].ano;
		cout << "------------------------------\n";
		cout << "Otima Escolha!\n";
	}
	else if (op == livro) {
		cout << "Voce escolheu um livro: \n";
		cout << "Digite as informacoes do livro desejado: \n";
		
		cin.get();
		cout << "------------------------------\n";
		cout << "Nome: ";
		cin.getline(emprestado2[0].nome, 30);
		cout << "Editora: ";
		cin.getline(emprestado2[0].editora, 30);
		cout << "Ano: ";
		cin >> emprestado2[0].ano;
		cout << "------------------------------\n";
		cout << "Otima Escolha!\n";
	}
	else {
		cout << "Opcao Incorreta!\n";
	}
	system("pause");
	return 0;
}