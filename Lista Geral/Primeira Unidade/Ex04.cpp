#include <iostream>

using namespace std;
int main() {
	float Cicl_Corr = 7.0;
	float Nat = 8.0;

	cout << "Peso: "; 
	float peso; cin >> peso;
	cout << "Tempo Pedalando: ";
	float time_ped; cin >> time_ped;
	cout << "Tempo Correndo: ";
	float time_cor; cin >> time_cor;
	cout << "Tempo Nadando: ";
	float time_nad; cin >> time_nad;

	double tot1 = (Cicl_Corr * peso) * (time_ped / 60);
	double tot2 = (Cicl_Corr * peso) * (time_cor / 60);
	double tot3 = (Nat * peso) * (time_nad / 60);

	cout << "Total De Calorias: " << tot1 + tot2 + tot3 << endl;

	system("pause");
	return 0;
}