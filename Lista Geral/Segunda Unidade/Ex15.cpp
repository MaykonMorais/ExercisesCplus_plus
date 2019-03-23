#include <iostream>
using namespace std;

int main() {
	int num;
	int cont = 0;
	int soma = 0;
	
	cout << "Digite numeros inteiros: \n";
	while (cin >> num && num != 0) {
		soma += num;
		++cont;
	}
	cout << "Foram lidos " << cont << "numeros. \n";
	cout << "A soma dos numeros e " << soma << endl;
	cout << "A media e " << float(soma) / cont << endl;
	system("pause");
	return 0;
}