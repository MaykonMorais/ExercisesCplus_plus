#include <iostream>
using namespace std;

union jogador { 
	char nome[25];
	int numero;
};

struct gol {
	jogador jog;
	int hora, min;
};

int main() {
	gol assistido[3];
	
	cout << "Digite os dados dos 3 ultimos gols: \nGol: ";
	cin >> assistido[0].jog.nome >> assistido[0].jog.numero >> assistido[0].hora >> assistido[0].min;
	cout << "Gol: ";
	cin >> assistido[1].jog.nome >> assistido[1].jog.numero >> assistido[1].hora >> assistido[1].min;
	cout << "Gol: ";
	cin >> assistido[2].jog.nome >> assistido[2].jog.numero >> assistido[2].hora >> assistido[2].min;
	
	cout << "1 Gol: \n";
	cout << "Jogador: " << assistido[0].jog.nome[0];
	cout << "Numero: " << assistido[0].jog.numero << endl;
	cout << "Hora: " << assistido[0].hora << ":" << assistido[0].min << endl;
	cout << "---------------------------\n";

	
	cout << "2 Gol: \n";
	cout << "Jogador: " << assistido[1].jog.nome[1] << endl;
	cout << "Numero: " << assistido[1].jog.numero << endl;
	cout << "Hora: " << assistido[1].hora << ":" << assistido[1].min << endl;
	cout << "---------------------------\n";
	

	cout << "3 Gol: \n";
	cout << "Jogador: " << assistido[2].jog.nome[1] << endl;
	cout << "Numero: " << assistido[2].jog.numero << endl;
	cout << "Hora: " << assistido[2].hora << ":" << assistido[2].min << endl;
	cout << "---------------------------\n";
	
	system("pause");
	return 0;
}