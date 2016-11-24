#include <iostream>
#include <queue>
#include "CuaIOEstudiant.hh"
using namespace std;

int main() {
	queue<Estudiant> cua;
	LlegirCuaEstudiant(cua);
	EscriureCuaEstudiant(cua);
	int dni2;
	cin >> dni2;
	double nota2;
	bool trobat = false;
	bool sinota = false;
	while(not trobat and not cua.empty()) {
		if(cua.front().consultar_DNI() == dni2) {
			trobat = true;
			if(cua.front().te_nota()) {
				sinota = true;
				nota2 = cua.front().consultar_nota();
			}
		}
		else cua.pop();
	}
	if(trobat) {
		if(sinota) cout << "La nota es " << nota2 << endl;
		else cout << "No te nota" << endl;
	}
	else cout << "No trobat" << endl;
}
