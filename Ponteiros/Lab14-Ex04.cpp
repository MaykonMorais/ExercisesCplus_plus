#include <iostream>
using namespace std;

struct horario {
	int hora, min;
};
void mostrar(horario * ptr);
int main() {
	horario hora;
	horario * ptr = &hora;

	cout << "Que horas sao? ";
	cin >> hora.hora >> hora.min;

	cout <<
		system("pause");
	return 0;
}
void mostrar(horario * ptr) {
	ptr->hora = hora->hora + 1;
}