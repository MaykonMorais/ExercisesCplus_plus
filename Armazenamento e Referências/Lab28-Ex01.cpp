#include <iostream>
using namespace std;
void contador(int & x);

int main() {
	int cont = 1;
	contador(cont);
	contador(cont);
	contador(cont);
	system("pause");
	return 0;
}

void contador(int & x) {
	cout << "Funcao chamada " << x++ << " vezes. " << endl;
}