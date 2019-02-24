#include <iostream>
using namespace std;

/*
Listando os 6 primeiros números primos, temos 2, 3, 5, 7, 11 e 13. Podemos notar
que o sexto número primo é 13. Qual é o 10001º número primo ?
*/

int main() {
	int pos;
	int quant;
	cout << "Digite a quantidade de primos que deseja: ";
	cin >> quant;
	int * primos = new int[quant];


	//primo
	int cont = 0;
	int ContPrimos = 0;
	
	for (int i = 2; i <= (quant+2); i++) { // contador dos numeros primos
		for (int j = 1; j <= i; j++) { // divisores anteriores
			if (i % j == 0) { // contador para a quantidade de divisores
				cont++;
			}
		}
		if (cont == 2) {
			primos[ContPrimos] = i;
			ContPrimos++;
		}
		cont = 0; // zera o contador
	}

	cout << "Digite a posicao que deseja verificar qual o numero primo: ";
	cin >> pos;
	for (int j = 0; j <= (quant+2); j++) {
		cout << primos[j] << " ";
	}

	cout << endl;
	cout << "O numero primo nessa posicao e " << primos[pos - 1] << endl;
	
	system("pause");
	return 0;
}