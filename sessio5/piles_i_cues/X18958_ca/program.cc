#include "PilaIOParInt.hh"
#include "ParInt.hh"
#include <stack>
#include <iostream>
using namespace std;

int main() {
	stack<ParInt>pila;
	llegirPilaParInt(pila);
	escriurePilaParInt(pila);
	int x,y;
	cin >> x;
	bool trobat = false;
	while(not pila.empty() and not trobat) {
		ParInt parell;
		parell = pila.top();
		if(parell.primer() == x) {
			trobat = true;
			y = parell.segon();
		}
		pila.pop();
	}
	if(trobat) cout << y << endl;
	else cout << "No trobat" << endl;
}
