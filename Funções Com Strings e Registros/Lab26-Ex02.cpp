#include  <iostream>
using namespace std;
int subst(char * str, char c1, char c2);

int main() {
	char nome[40];
	cout << "Digite seu nome: ";
	cin.get(nome, 40);

	char c1 = 'a';
	char c2 = 'e';


	cout << "O numero de substituicoes: " << subst(nome, c1, c2) << endl;
	cout << "Nome Substituido: " << nome << endl;
	system("pause");
	return 0;
}
int subst(char * str, char c1, char c2) {
	int cont = 0;
	
	while (*str) {
		if (*str == c1) {
			*str = c2;
			++cont;
		}
		++str;
	}
	return cont;
}

