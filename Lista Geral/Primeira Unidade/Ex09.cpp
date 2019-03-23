#include <iostream>
#include <cmath>
using namespace std;
int absoluto(int);
int main() {
	cout << "Digite um numero inteiro: ";
	int x; cin >> x;
	cout << "O valor absoluto e " << absoluto(x) << endl;
	system("pause");
	return 0;
}
int absoluto(int x) {
	return sqrt(pow(x, 2));
}