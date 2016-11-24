#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

vector<Estudiant> simplificar(const vector<Estudiant> &v) {
	vector<Estudiant>resultat;
	int mida = v.size();
	Estudiant ant;
	if(mida != 0) {
		ant = v[0];
		resultat.push_back(ant);
	}
	for(int i = 0; i < mida; ++i) {
		if(resultat.back().consultar_DNI() == v[i].consultar_DNI()) {
			if(resultat.back().te_nota() and v[i].te_nota() and resultat.back().consultar_nota()<v[i].consultar_nota()) resultat.back().modificar_nota(v[i].consultar_nota());
			if(not resultat.back().te_nota() and v[i].te_nota()) resultat.back().afegir_nota(v[i].consultar_nota());
		}
		else resultat.push_back(v[i]);
	}
	return resultat;
}

void escriure_vector(const vector<Estudiant> &v) {
	int size = v.size();
	for(int i = 0;i < size; ++i) {
		v[i].escriure();
	}
}

int main() {
	int n;
	cin >> n;
	vector<Estudiant>vec(n);
	for(int i = 0; i < n; ++i) vec[i].llegir();	
	vector<Estudiant>res = simplificar(vec);
	escriure_vector(res);			
}
	
