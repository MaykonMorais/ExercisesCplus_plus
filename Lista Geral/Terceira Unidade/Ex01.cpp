#include <iostream>
using namespace std;

int main() {
	cout << "Digite um texto (# para finalizar): \n";
	char ch; 

	int subs = 0;
	while (cin.get(ch), ch != '#') {
		if (ch == '!') {
			cout << ch;
			++subs;
		}
		else if (ch == '.') {
			ch = '!';
			++subs;
		}
		cout << ch;
	}
	cout << "Substituicoes: " << subs << endl;
	system("pause");
	return 0;
}

