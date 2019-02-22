#include <iostream>
using namespace std;

/*
Se listarmos todos os números naturais menores que 10 que são múltiplos de 3 ou
5, nós teremos 3, 5, 6 e 9. A soma destes múltiplos é 23. Encontre a soma de todos
os múltiplos de 3 ou 5 menores que 1000. 
*/
int main() {
	int a, b;
	cin >> a >> b;
	int soma = 0;

	for (int i = a; i < b; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			soma += i;
		}
	}
	cout << "A soma e : " << soma << endl;
	system("pause");
	return 0;
}