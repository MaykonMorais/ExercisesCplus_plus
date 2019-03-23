#include <iostream>
using namespace std;
double media(int, int);
int main() {
	cout << "Digite um numero inteiro: ";
	int num1; cin >> num1;
	cout << "Digite outro numero inteiro: ";
	int num2; cin >> num2;
	cout << "A media dos numeros e: " << media(num1, num2);
	system("pause");
	return 0;
}
double media(int x, int y) {
	return (x + y) / double(2);
}