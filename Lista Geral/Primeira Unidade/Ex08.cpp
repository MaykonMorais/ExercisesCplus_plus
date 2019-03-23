#include <iostream>
using namespace std;
const double PI = 3.14159;

double volumeCilindro(float, float);
int main() {
	
	cout << "Calcula o volume de um Cilindro: \n";
	cout << "---------------------------------\n";
	cout << "Entre com o raio de base: ";
	float raio; cin >> raio;
	cout << "Entre com a altura: ";
	float altura; cin >> altura;
	
	cout << "O volume do cilindro e " << volumeCilindro(altura, raio);
	system("pause");
	return 0;
}

double volumeCilindro(float altura, float raio) {
	return PI * raio * (double)raio * altura;
}