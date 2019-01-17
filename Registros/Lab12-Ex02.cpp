#include <iostream>

struct palavra {
	char pt[30];
	char en[30];
	char es[30];
};
using namespace std;
int main() {
	palavra dicionario[100] = {
		{"Bola", "Ball", "Pelota"}, 
		{"Bonita", "Beautiful", "Hermosa"},
		{"Livro", "Book","Libro"}
	};

	cout << "Digite uma palavra em portugues: \n";
	cin >> dicionario[3].pt;
	cout << "Palavra em Ingles: ";
	cin >> dicionario[3].en;
	cout << "Palavra em espanhol: ";
	cin >> dicionario[3].es;

	cout << "=========DICIONARIO===========\n";
	cout << "---------------------------------\n";
	cout << "Portugues: " << dicionario[0].pt << endl;
	cout << "Palavra Em Ingles: " << dicionario[0].en << endl;
	cout << "Palavra Em Espanhol " << dicionario[0].es << endl;

	cout << "\n---------------------------------\n";
	cout << "Portugues: " << dicionario[1].pt << endl;
	cout << "Palavra Em Ingles: " << dicionario[1].en << endl;
	cout << "Palavra Em Espanhol " << dicionario[1].es << endl;

	cout << "\n---------------------------------\n";
	cout << "Portugues: " << dicionario[2].pt << endl;
	cout << "Palavra Em Ingles: " << dicionario[2].en << endl;
	cout << "Palavra Em Espanhol " << dicionario[2].es << endl;

	cout << "\n---------------------------------\n";
	cout << "Portugues: " << dicionario[3].pt << endl;
	cout << "Palavra Em Ingles: " << dicionario[3].en << endl;
	cout << "Palavra Em Espanhol " << dicionario[3].es << endl;

	system("Pause");
	return 0;
}
