#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Digite o horario de partida ( HH MM ) ";
	int hora1, min1; cin >> hora1 >> min1;
	cout << "Digite o horario de chegada ( HH MM ): ";
	int hora2, min2; cin >> hora2 >> min2;

	int totalHora = (hora2 * 60) - (hora1 * 60); // minutos
	int totalMin = (min2 - min1);
	
	int tot = (totalHora + totalMin) / 60;
	
	cout << "O tempo total de viagem foi " << tot << " horas e " << sqrt(pow(totalMin, 2)) << " minutos." << endl;
    system("pause");
	return 0;
}
