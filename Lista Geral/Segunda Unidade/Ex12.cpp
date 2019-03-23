#include <iostream>

using namespace std;
int main() {
	int vet1[5];
	int vet2[5];
	int num = 0;
	int j = 0;
	for (int i = 0; i < 10; i++) {
		cout << "Digite os numeros \n";
		if (i < 5) {
			cin >> num;
			vet1[i] = num;
		}
		else {
			cin >> num;
			vet2[j++] = num;
		}
	}
	int vetTot[5];
	for (int i = 0; i < 5; i++) {
		vetTot[i] = vet1[i] + vet2[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << vetTot[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
