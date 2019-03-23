#include <iostream>

using namespace std;
int main() {
	const double DISTRIBUIDOR = 0.28;
	const double IMPOSTO = 0.45;

	cout << "Digite o custo de fabrica: ";
	double preco_fab; cin >> preco_fab;

	double tot;
	tot = preco_fab + (preco_fab * DISTRIBUIDOR) + (preco_fab + IMPOSTO);
	cout << "O custo ao consumidor sera: " << tot << endl;

	system("pause");
	return 0;
}