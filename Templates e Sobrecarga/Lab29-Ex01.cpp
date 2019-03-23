#include <iostream>
using namespace std;
void mostrar(const char * ch, bool mais = false);

int main() {
	
	mostrar("OLA");
	mostrar("Ola", true);

	system("pause");
	return 0;
}
void mostrar(const	 char * ch, bool mais) {
	cout << ch;
	static int cont = 0;
	if (mais) {
		for(int i = 0; i < cont; i++)
			cout << ch << endl;
	}
	++cont;
}