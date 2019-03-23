#include <iostream>

using namespace std;
int main() {
	cout << "Digite jogador/time: ";
	char NomeTime[15]; cin >> NomeTime;

	int tam = strlen(NomeTime);
	int j = 0; // captura da posicao do /
	char * ptr = 0;
	
	for (int i = 0; i < tam; i++) {
		if (NomeTime[i] == '/') {
			j = i; // a posicao do / é salva
			ptr = &NomeTime[j+1];
		}
	}
	cout << "Nome do jogador tem " << j  << "Letras \n";
	cout << "O seu time e: " << ptr << endl;
	
	system("pause");
	return 0;
}

