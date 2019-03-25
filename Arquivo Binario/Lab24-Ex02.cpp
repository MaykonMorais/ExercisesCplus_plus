#include <iostream>
#include <fstream>
using namespace std;

struct soldado {
	char nome[30];
	int elim;
	int mortes;
	float taxa;
	int partidas;
};

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("soldado.dat", ios_base::in | ios_base::binary);
	soldado newSoldier; // parametros para outras funcoes

	if (!fin.is_open()) {
		cout << "Soldado nao encontrado\n";
		cout << "Novo Soldado\n";
		fout.open("soldado.dat", ios_base::out | ios_base::binary);
		
		cout << "Nome: ";
		cin >> newSoldier.nome;
		cout << "Eliminacoes: ";
		cin >> newSoldier.elim;
		cout << "Mortes: ";
		cin >> newSoldier.mortes;
		cout << "Partidas: ";
		cin >> newSoldier.partidas;

		newSoldier.taxa = newSoldier.elim / float(newSoldier.mortes);
		fout.write((char*)&newSoldier, sizeof(soldado));
		fout.close();
	}
	else {
		cout << "[N]ovo Soldado\n[A]tualizar Soldado\n[E]xibe soldado\n[S]air\n";
		char op; cin >> op; op = toupper(op);
		
		soldado y;
		fin.read((char*)&y, sizeof(soldado));
		newSoldier = y;


		while (op != 'S') {
			switch (op)
			{
			case 'N':
				fout.open("soldado.dat", ios_base::out, ios_base::binary);
				cout << "Novo Soldado\n";

				cout << "Nome: ";
				cin >> newSoldier.nome;
				cout << "Eliminacoes: ";
				cin >> newSoldier.elim;
				cout << "Mortes: ";
				cin >> newSoldier.mortes;
				cout << "Partidas: ";
				cin >> newSoldier.partidas;
				newSoldier.taxa = newSoldier.elim / float(newSoldier.mortes);
				break;
			case 'A':
				cout << "Numero de Eliminacoes: ";
				cin >> newSoldier.elim;
				cout << "Mortes: ";
				cin >> newSoldier.mortes;
				newSoldier.taxa = newSoldier.elim / float(newSoldier.mortes);
				break;
			case 'E':
				cout << "Nome: " << newSoldier.nome << endl;
				cout << "Eliminacoes: " << newSoldier.elim << endl;
				cout << "Mortes: " << newSoldier.mortes << endl;
				cout << "Taxa: " << newSoldier.taxa << endl;
				cout << "Partidas: " << newSoldier.partidas << endl;
				break;
			default:
				cout << "OPCAO INVALIDA\n";
				break;
			}
			cout << "[N]ovo Soldado\n[A]tualizar Soldado\n[E]xibe soldado\n[S]air\n";
			cin >> op; op = toupper(op);
		}
	}
	fout.write((char*) &newSoldier, sizeof(soldado));
	fout.close();

	system("pause");
	return 0;
}

