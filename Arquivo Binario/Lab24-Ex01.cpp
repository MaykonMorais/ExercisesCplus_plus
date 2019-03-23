#include <iostream>
#include <fstream>
using namespace std;
struct soldado {
	char nome[30];
	int eliminacoes;
	int mortes;
	double taxa;
	int partidas;
};
void newSoldier(soldado * y);
void atualizar(soldado * y);
void exibir(const soldado * y);

int main() {
	ifstream fin;
	fin.open("arquivo.dat", ios_base::in | ios_base::binary);
	soldado x;

	if (!fin.is_open()) {
		cout << "Nome: ";
		cin >> x.nome;
		cout << "Eliminacoes: ";
		cin >> x.eliminacoes;
		cout << "Mortes: ";
		cin >> x.mortes;
		cout << "Partidas: ";
		cin >> x.partidas;

		ofstream fout1;
		fout1.open("arquivo.dat", ios_base::out | ios_base::binary);
		fout1.write((char*)&x, sizeof(soldado));
	}
	fin.close();
	ifstream ler;
	ler.open("arquivo.dat", ios_base::in | ios_base::binary);
	soldado  y;
	
	ler.read((char*)&y, sizeof(soldado));
	cout << "[N]ovo soldado\n[A]tualiza soldado\n[E]xibe Soldado\n[S]air\n";
	cout << "Opcao: ";
	ler.close();
	char ch; cin >> ch;
	ch = tolower(ch);

	while (ch != 's'){
		switch (ch)
		{
		case 'n':
			newSoldier(&y);
			break;
		case 'a':
			atualizar(&y);
			break;
		case 'e':
			exibir(&y);
			break;
		default:
			cout << "Opcao Errada\n";
			break;
		}
		cin >> ch;
	}

	ofstream fout1;
	fout1.open("arquivo.dat", ios_base::out | ios_base::trunc | ios_base::binary);
	fout1.write((char*) &y, sizeof(soldado));
	fout1.close();

	system("pause");
	return 0;
}
void newSoldier(soldado * y) {
	soldado x;
	cout << "Nome: ";
	cin >> y->nome;
	cout << "Eliminacoes: ";
	cin >> y->eliminacoes;
	cout << "Mortes: ";
	cin >> y->mortes;
	cout << "Partidas: ";
	cin >> y->partidas;
	y->taxa = y->eliminacoes / y->mortes;
}

void atualizar(soldado * y) {
	cout << "Numero de Eliminacoes: ";
	cin >> y->eliminacoes;
	cout << "Mortes: ";
	cin >> y->mortes;
}
void exibir(const soldado * y) {
	cout << "Nome: ";
	cout << y->nome << endl;
	cout << "Eliminacoes: ";
	cout << y->eliminacoes << endl;
	cout << "Mortes: ";
	cout << y->mortes << endl;
	cout << "Partidas: ";
	cout << y->partidas << endl;
}
