#include <iostream>

using namespace std;

double soma(double x, double y);
double multi(double x, double y);
double calcular(double, double, double (*pf)(double, double));
double(*pf)(double, double);

int main() {
	double x = 2.5, y = 10.3;

	cout << calcular(x, y, soma) << endl;
	cout << "Digite Pares de valores: ";
	double a, b;

	int cont = 0;
	while (cin >> a, cin >> b, cont < 10) {
		cout << "Soma: " << calcular(a, b, soma) << endl;
		cout << "Multiplicacao: " << calcular(a, b, multi) << endl;
		++cont;
        cout << "Digite Pares de Numeros: ";
	}
	system("pause");
	return 0;
}
double soma(double x, double y) {
	return x + y;
}
double multi(double x, double y) {
	return x * y;
}
double calcular(double x, double y, double (*pf)(double, double)) {
	return pf(x, y);
}