#include <iostream>
using namespace std;
struct candidato {
	char nome[30];
	int notas[3];
};
void mostrar(candidato * aluno);
int main() {
	candidato x = { "Maria", 7, 8, 10};
	mostrar(&x);
	system("pause");
	return 0;
}

void mostrar(candidato * aluno) {
	cout << "Nome: ";
	cout << aluno->nome << endl;
	cout << "Notas: ";
	for (int i = 0; i < 3; i++)
		cout << aluno->notas[i] << " ";
	cout << endl;
}
