#include <iostream>
using namespace std;

int main() {
	int num1;
	cout << "Digite a tabuada desejada: ";
	cin >> num1;

	cout << "Tabuada de " << num1 << endl;
	cout << "-----------------\n";
	for (int i = 0; i <= 10; i++) {
		cout << num1 << " x " << i << " = " << num1 * i << endl;
	}
	system("pause");
	return 0;
}