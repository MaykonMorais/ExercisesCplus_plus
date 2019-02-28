#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
	ifstream fin;
	ofstream fout;

	fout.open("a.txt");
	if (!fout.is_open()) {
		cout << "Abertura do Arquivo Falhou\n";
		exit(EXIT_FAILURE);
	}

	fin.open("m.txt");
	if (!fin.is_open()) {
		cout << "Abertura do arquivo falhou\n";
		exit(EXIT_FAILURE);
	}
	
	char ch;
	char var = 0;
	while (fin.get(ch), fin.good()) {
		if (isdigit(ch) && isdigit(var)) {
			fout << ch << endl;
		}
		else if (isdigit(ch)) {
			fout << ch;
		}
		var = ch; // guarda o item anterior
	}
	
	fout.close();
	fin.close();
	system("pause");
	return 0;
}