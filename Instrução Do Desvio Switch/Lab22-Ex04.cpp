#include <iostream>
using namespace std;

struct produto {
	double preco;
	int codigo;
};
int main() {
	produto x;
	cout << "Digite o preco do produto: R$ ";
	cin >> x.preco;
	cout << "Digite o codigo de origem: ";
	

	
	while (cin >> x.codigo, x.codigo > 0 && x.codigo <= 9) {
		
		if (x.codigo == 1 || x.codigo == 2) {
			x.codigo = 1; // sul
		}
		else if (x.codigo == 5 || x.codigo == 6) {
			x.codigo = 4; // nordeste
		}
		else if (x.codigo == 7 || x.codigo == 8 || x.codigo == 9) {
			x.codigo = 5; // sudeste
		}

		switch (x.codigo)
		{
		case 1:
			cout << "Codigo Do Sul\n";
			break;
		case 3:
			cout << "Codigo Do Norte\n";
			break;
		case 4:
			cout << "Codigo Centro-Oeste\n";
			break;
		case 5:
			cout << "Codigo Do Sudeste\n";
			break;
		default:
			cout << "Codigo Invalido!\n";
			break;
		}

	}
	system("pause");
	return 0;
}
