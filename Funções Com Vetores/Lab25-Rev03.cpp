#include <iostream>
#include <fstream>
using namespace std;
void inversa(const char * str, char * inv);

int main() {
	ifstream fin;
	fin.open("nome.txt", ios_base::in);
	
	char palavra[30];
	fin >> palavra;
	
	int cont = 0;
	while (!fin.eof()) {
		char inv[30];
		inversa(palavra, inv);
		if (!strcmp(palavra, inv)) {
			cout << palavra << endl;
			++cont;
		}
		fin >> palavra;
	}
	system("pause");
	return 0;
}
void inversa(const char * str, char * inv) {
	int tam = strlen(str);

	for (int i = 0; i < tam; i++) {
		inv[i] = str[tam - i - 1];
	}
	inv[tam] = '\0';
}