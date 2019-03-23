#include <iostream>

using namespace std;
int main() {
	cout << "A quantos anos voce fuma? ";
	unsigned short anos; cin >> anos;
	
	cout << "Quantos cigarros voce fuma por dia? ";
	unsigned short cigarros_dia; cin >> cigarros_dia;

	cout << "Qual o preco medio de uma carteira de cigarros? ";
	double preco; cin >> preco;

	double Cig_Vida = (365 * anos) * cigarros_dia; // cigarros por vida
	float carteira = (Cig_Vida / 20) * preco;

	cout << "Voce gastou ate agora R$ " << carteira << endl;

	system("pause");
	return 0;
}