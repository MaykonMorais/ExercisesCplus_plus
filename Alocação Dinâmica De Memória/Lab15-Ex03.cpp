#include <iostream>
using namespace std;
int main() {
	cout << "Quantos inteiros deseja armazenar em um vetor: ";
	int tam;
	cin >> tam;
	int * ptr = new int[tam];
	cout << "Preencha o Vetor Criado: ";
	for (int i = 0; i < tam; i++) {
		cout << "Vetor " << i << ": ";
		cin >> ptr[i];
	}

	cout << "\nVetores Preenchidos\n";
	for (int i = 0; i < tam; i++) {
		cout << "Vetor : " << i << ": " << ptr[i] << endl;
	}

	system("pause");
	return 0;
}
