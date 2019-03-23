#include <iostream>
#include <fstream>
using namespace std;
int subst(char * str, char c1, char c2);
int main() {
	char nome[10];
	cout << "Digite teu nome: ";
	cin >> nome;
	int  tot = subst(nome, 'a', 'e');

	cout << "Nome trocado: " << nome << endl;
	cout << "Substituicoes: " << tot << endl;
	system("pause");
	return 0;
}

int subst(char * str, char c1, char c2) {
	int cont = 0;
	while (*str) {
		if (*str == c1){
			*str = c2;
			++cont;
		}
		++str;
	}
	return cont;
}
