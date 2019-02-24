#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
struct nadador {
	char nome[30];
	unsigned idade;
	char categoria[30];
};

int main() {

	nadador y; 
	char categorias[5][12] = {
		"Infatil", "Juvenil", "Adolescente", "Adulto", "Senior"
	};

	cout << "Nome Do Nadador: ";
	cin.getline(y.nome, 30);
	cout << "Idade: ";
	cin >> y.idade;
	

	if (y.idade >= 5 && y.idade <= 7) {
		strcpy(y.categoria, categorias[0]);
	}
	else if (y.idade >= 8 && y.idade <= 10) {
		strcpy(y.categoria, categorias[1]);
	}
	else if (y.idade >= 11 && y.idade < 15) {
		strcpy(y.categoria, categorias[2]);
	}
	else if (y.idade >= 15 && y.idade <= 30) {
		strcpy(y.categoria, categorias[3]);
	}
	else if (y.idade > 30){
		strcpy(y.categoria, categorias[4]);
	}
	else {
		cout << "Desculpe, mas voce nao esta faixa etaria!\n";
		strcpy(y.categoria, "Nenhuma");
	}

	cout << "Categoria: " << y.categoria << endl;
	system("pause");
	return 0;
}