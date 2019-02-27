#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char ch;
	int vet[5] = {0}; // vetor contador de vogais
	
	cout << "Digite uma frase (@ para sair)\n";
	
	while (cin.get(ch), ch != '@') {
		if (isupper(ch))
			ch = tolower(ch);
		switch (ch)
		{
		case 'a':
			++vet[0];
			break;
		case 'e':
			++vet[1];
			break;
		case 'i':
			++vet[2];
			break;
		case 'o':
			++vet[3];
			break;
		case 'u':
			++vet[4];
			break;
		default:
			break;
		}
	}

	cout << "a: " << vet[0] << endl;
	cout << "e: " << vet[1] << endl;
	cout << "i: " << vet[2] << endl;
	cout << "o: " << vet[3] << endl;
	cout << "u: " << vet[4] << endl;

	system("pause");
	return 0;
}