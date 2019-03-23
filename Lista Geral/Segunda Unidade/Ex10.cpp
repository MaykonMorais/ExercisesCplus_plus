#include <iostream>

using namespace std;
int main() {
	int a[] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	int * ptr1 = 0;
	int * ptr2 = 0;
	for (int i = 0; i < 10; i+=2) {
		ptr1 = &a[i];
		ptr2 = &a[i + 1];
		cout << "[" << *ptr1 << "," << *ptr2 << "]" << endl;
	}
	system("pause");
	return 0;
}