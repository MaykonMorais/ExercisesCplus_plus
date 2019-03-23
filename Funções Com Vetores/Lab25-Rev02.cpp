#include <iostream>
#include <fstream>
using namespace std;
double maior(const double  * x);
int main() {
	ifstream fin;
	fin.open("num.txt");
	
	int cont = 0;
	double x;
	fin >> x;

	while (!fin.eof()) {
		++cont;
		fin >> x;
	}
	fin.close();

	fin.open("num.txt");
	double * vetor = new double[cont];
	int i = 0;
	fin >> x;
	while (!fin.eof()) {
		vetor[i++] = x;
		fin >> x;
	}
	cout << "Maior numero: " << maior(vetor) << endl;
	delete vetor;
	fin.close();
	system("pause");
	return 0;
}
double maior(const double  * x) {
	double aux = 0;
	while (*x) {
		if (*x >= aux) {
			aux = *x;
		}
		++x;
	}
	return aux;
}