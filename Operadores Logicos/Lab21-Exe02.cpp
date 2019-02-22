#include <iostream>
using namespace std;

int main() {
	int num;
	int cont = 0;

	while (cin >> num, num >= 0) {
		for (int i = 1; i <= num; i++) { // percorre todos os numeros divisores do numero digitado
			if (num % i == 0) {
				++cont;
			};
		}
		if (cont == 2) {
			cout << "O numero  e primo!" << endl;
		}
		else {
			cout << "O numero nao e primo!" << endl;
		}
		cont = 0;
	}
	system("pause");
	return 0;
}