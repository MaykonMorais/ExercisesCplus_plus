#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct tigela {
	char estado[30];
	char tipo[30];
};
void fome(tigela * ptr);

int main() {
	tigela cheia = { "cheia", "frango" };
	tigela * ptr = &cheia;

	cout << "Tigela antes do jantar: " << ptr->estado << endl;
	cout << "Tigela depois do jantar: ";
	fome(ptr);
	system("pause");
	return 0;
}
void fome(tigela * ptr) {
	strcpy(ptr->estado, "vazia");
	cout << ptr->estado << endl;
	
}