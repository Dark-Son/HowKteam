#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a = {1,3,2,6};
	a.resize(10);
	for (auto const& i : a) {
		cout << i << ' ';
	}
	cout << endl << a.capacity();
	//cout << a.size() << endl;
	system("Pause");
	return 0;
}