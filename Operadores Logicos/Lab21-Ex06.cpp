#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Digite o intervalo dos divisores: ";
	cin >> a >> b;

	int cont = 1;
	int x = 0;
	bool continuar = true;

	while (continuar == true) {
		for (int i = a; i <= b; i++) {
			if (cont % i == 0) {
				x++;
			}
		}

		if (x == b) {
			continuar = false;
		}	
		cont++;
		x = 0;
	}
	cout << "O menor numero divisivel nesse intervalo foi: " << (cont-1) << endl;
	system("pause");
	return 0;
}