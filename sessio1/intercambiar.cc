#include <iostream>
using namespace std;

void intercambiar(int& m, int& n) {
	int aux = m;
	m = n;
	n = aux;
}

int main() {
	int x,y;
	cin >> x >> y;
	intercambiar(x,y);
	cout << x <<" " << y << endl;
}
