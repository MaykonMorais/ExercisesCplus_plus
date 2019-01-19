#include <iostream>
using namespace std;

struct Data {
	int dia, mes, ano;
};
struct horario {
	short hora, minuto;
};

int main() {
	Data evento[10];
	horario horaAndMin[10];
	char descricao[10][18];

	cout << "Entre com 2 eventos: \n";
	cout << "#1\n";
	cout << "Data: ";
	cin >> evento[0].dia >> evento[0].mes >> evento[0].ano;
	cout << "Hora: ";
	cin >> horaAndMin[0].hora >> horaAndMin[0].minuto;
	cin.get();
	cout << "Descricao: ";
	cin.getline(descricao[0], 18);

	cout << "\n#2\n";
	cout << "Data: ";
	cin >> evento[1].dia >> evento[1].mes >> evento[1].ano;
	cout << "Hora: ";
	cin >> horaAndMin[1].hora >> horaAndMin[1].minuto;
	cin.get();
	cout << "Descricao: ";
	cin.getline(descricao[1], 18);

	cout << "----------------------\n";
	cout << "Eventos Cadastrados: \n";
	cout << evento[0].dia << "/" << evento[0].mes << "/" << evento[0].ano;
	cout << " " << horaAndMin[0].hora << ":" << horaAndMin[0].minuto << " ";
	cout << descricao[0] << endl;

	cout << evento[1].dia << "/" << evento[1].mes << "/" << evento[1].ano;
	cout << " " << horaAndMin[1].hora << ":" << horaAndMin[1].minuto << " ";
	cout << descricao[1] << endl;

	system("pause");
	return 0;
}