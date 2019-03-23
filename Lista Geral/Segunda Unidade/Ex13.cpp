#include <iostream>
using namespace std;

int main() {
	int vetBI[4][4] =
	{
		{3, 1, 5, 5},
		{1, 5, 5, 6},
		{2, 3, 4, 5},
		{4, 9, 1, 8}
	};
	int soma = 0;
	
	for (int i = 0; i < 4; i++) { // colunas
		
		for (int j = 0; j < 4; j++) { // linhas
			soma += vetBI[j][i];
		}
		cout << soma << " ";
		soma = 0;
	}
	system("pause");
	return 0;
}

