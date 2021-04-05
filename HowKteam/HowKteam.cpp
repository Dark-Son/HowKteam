#include <iostream>

using namespace std;

int main() {
	int x = 10;
	cout << x << endl;
	cout << &x << endl;
	
	int *t = &x;
	cout << t << endl;
	cout << *t << endl;
	system("Pause");
	return 0;
}