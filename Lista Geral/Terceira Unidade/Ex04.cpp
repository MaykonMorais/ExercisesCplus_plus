#include <iostream>
using namespace std;

int main() {
	cout << "Digite uma frase (@ para finalizar): ";
	char ch;
	
	int a = 0, e = 0, i = 0, o = 0, u = 0;

	while (cin.get(ch), ch != '@') {
		ch = tolower(ch);
		switch (ch)
		{
		case 'a': a++; break;
		case 'e': e++; break;
		case 'i': i++; break;
		case 'o': o++; break;
		case 'u': u++; break;
		default:
			break;
		}
	}
	cout << "a: " << a << endl;
	cout << "e: " << e << endl;
	cout << "i: " << i << endl;
	cout << "o: " << o << endl;
	cout << "u: " << u << endl;

	system("pause");
	return 0;
}
