#include <iostream>
using namespace std;
enum semana {SEG, TER, QUA, QUI, SEXTA, SAB, DOM};
	
int main() {
	char Dias[7][12] = {
		"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"
	};
	for (semana i = SEG; i <= DOM; i = semana(i + 1)) {
		cout << Dias[i] << endl;
	}
	system("pause");
	return 0;
}