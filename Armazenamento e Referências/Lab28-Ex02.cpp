#include <iostream>

using namespace std;
struct caixa {
	char fabricante[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};
void mostrar(caixa & box);
void modifica(caixa & box);
int main() {
	caixa x = { "SuperBox", 50, 32 , 40, 200 }; 
	mostrar(x);
	modifica(x);
	
    cout << "\n-------------\n";
	mostrar(x);

	system("pause");
	return 0;
}
void mostrar(caixa & box) {
	cout << "Fabricante: " << box.fabricante << endl;
	cout << "Altura: " << box.altura << endl;
	cout << "Largura: " << box.largura << endl;
	cout << "Comprimento: " << box.comprimento << endl;
	cout << "Volume: " << box.volume << endl;
}
void modifica(caixa & box) {
	box.volume = box.altura * box.comprimento * box.largura;
}