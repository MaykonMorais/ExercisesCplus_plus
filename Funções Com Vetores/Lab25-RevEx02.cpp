#include <iostream>
#include <fstream>
using namespace std;

double Maior(double * vet, int tamanho);
int main() {
	ifstream fin;
	fin.open("numeros.txt", ios_base::in);
	double x;
	
	fin >> x;
	int cont = 1;
	while (!fin.eof()) {
		fin >> x;
		cont++;
	}
	fin.close();
	fin.open("numeros.txt", ios_base::in);
	double * y = new double[cont];
	
	fin >> x;
	int i = 1;
	y[0] = x;

	while (!fin.eof()) {
		fin >> x;
		y[i++] = x;
	}
	fin.close();
	
	cout << Maior(y, cont) << endl;;
	cout << cont << endl;
	system("pause");
	return 0;
}

double Maior(double * vet, int tamanho) {
	double auxiliar = 0;
	for (int i = 0; i < tamanho; i++) {
		if (vet[i] > auxiliar)
			auxiliar = vet[i];
	}
	return auxiliar;
}