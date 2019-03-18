#include <iostream>
#include <fstream>
using namespace std;


struct pares {
	int x;
	int y;
};
void listagem(pares * vet, int tamanho);
int main() {
	pares p[10];
	pares x;

	int i = 0;
	while (((cin >> x.x && x.x != 0) && (cin >> x.y && x.y != 0)) && i <= 10) {
		p[i++] = x;
	}
	listagem(p, i);
	system("pause");
	return 0;
}
void listagem(pares * vet, int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		if (vet[i].x <= vet[i].y) {
			cout << "(" << vet[i].x << "," << vet[i].y << ")" << endl;
		}
		else {
			cout << "(" << vet[i].y << "," << vet[i].x << ")" << endl;
		}
	}
}
