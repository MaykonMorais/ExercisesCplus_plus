#include <iostream>

using namespace std;

int main() {
	
	char ch;
	cout << "Digite um um texto (# para finalizar): " << endl;
	cin.get(ch);
	
	while (ch != '#') {
		if (ch == '!') {
			cout << ch;
		}
		else if (ch == '.') {
			ch = '!';
		}
		cout << ch;
		cin.get(ch);

	}
	system("pause");
	return 0;
}