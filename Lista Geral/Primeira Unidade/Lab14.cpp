#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Digite um numero real: ";
	double num; cin >> num;

	cout << "A parte inteira: " << int(num) << endl;
	cout << "A parte fracionaria: " << num - int(num) << endl;
	system("pause");
	return 0;
}
