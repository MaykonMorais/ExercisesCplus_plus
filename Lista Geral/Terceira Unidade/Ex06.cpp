#include <iostream>
#include <fstream>

using namespace std;
void inversa(char * ch, char * inv);
int main() {
	ifstream fin;
	fin.open("text.txt", ios_base::in);
	if (!fin.is_open()) {
		cout << "Abertura falhou!\n";
		exit(EXIT_FAILURE);
	}
	char palavra[30]; // tipo de dado que ira ler
	int pali = 0;

	while (!fin.eof(), fin >> palavra) {
		char inv[30];
		inversa(palavra, inv);
		
		if (!strcmp(palavra, inv)) {
			cout << inv << endl;
			++pali;
		}
	}
	fin.close();
	cout << "Foram encontrados " << pali << "palindromos neste arquivo.\n";
	system("pause");
	return 0;
}
void inversa(char * ch, char * inv) {
	int tam = strlen(ch);
	for (int i = 0; i < tam; i++) {
		ch[i] = tolower(ch[i]);
	}

	for (int i = 0; i < tam; i++) {
		inv[i] = tolower(ch[tam - 1 - i]);
	}
	inv[tam] = '\0';
}