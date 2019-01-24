#include <iostream>
using namespace std;
struct local {
	char nome[20];
	char pais[20];
	char continente[20];
};
int main() {
	cout << "Quantos locais deseja visitar esse ano (no maximo 5): ";
	int locais;
	cin >> locais;
	local *  pos = new local[locais];
	for (int i = 0; i < locais; i++) {
		cout << "Local " << i +1 << ": " << endl;
		cout << "Nome " << i + 1 << ": ";
		cin >> pos[i].nome;

		cout << "Pais: ";
		cin >> pos[i].pais;

		cout << "Continente: ";
		cin >> pos[i].continente;
	}

	for (int i = 0; i < locais; i++) {
		cout << "Local " << i + 1 << endl;
		cout << "Nome: " << pos[i].nome << endl;
		cout << "Pais: " << pos[i].pais << endl;
		cout << "Continente: " << pos[i].continente << endl;
		cout << "-------------------------\n";
	}
	system("pause");
	return 0;
}