#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
template<typename T>
T max5(T vet[5]) {
	T temp = 0;
	for (int i = 0; i < 5; i++) {
		if (vet[i] >= temp) {
			temp = vet[i];
		}
	}
	return temp;
}
int main() {
	int vet[5] = { 1, 2, 3, 4, 5 };
	cout << max5(vet);
	system("pause");	
	return 0;
}
