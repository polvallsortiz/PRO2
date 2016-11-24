#include <queue>
#include <iostream>
#include "ParInt.hh"
#include "CuaIOParInt.hh"
using namespace std;

int main() {
	queue<ParInt> cuappal;
	LlegirCuaParInt(cuappal);
	queue<ParInt> cua1;
	queue<ParInt> cua2;
	int espera1,espera2;
	espera1 = espera2 = 0;
	while(not cuappal.empty()) {
		if(espera1 <= espera2) {
			cua1.push(cuappal.front());
			espera1 += cuappal.front().segon();
		}
		else {
			cua2.push(cuappal.front());
			espera2 += cuappal.front().segon();
		}
		cuappal.pop();
	}
	EscriureCuaParInt(cua1);
	cout << endl;
	EscriureCuaParInt(cua2);
	
}
