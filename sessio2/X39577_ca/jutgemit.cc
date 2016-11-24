#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

typedef vector<vector<double> > Matnot;

void escriure_vector(const vector<Estudiant> &v) {
	for(int i = 0; i < v.size(); ++i) v[i].escriure();
}

int main() {
	int ests,numnot,numacts;
	cin >> ests >> numnot >> numacts;
	vector<int>vnumacts(numacts);
	for(int i = 0; i < numacts; ++i) cin >> vnumacts[i];
	++numnot;
	Matnot taula(ests,vector<double>(numnot));
	for(int s = 0; s < ests; ++s) {
		for(int j = 0; j < numnot; ++j) cin >> taula[s][j];
	}
	vector<Estudiant> resultat(ests);
	for(int z = 0; z < ests; ++z) {
		double mitjana = 0;
		for(int y = 0; y < numacts; ++y) {
			mitjana += taula[z][vnumacts[y]];
		}
		mitjana = mitjana / numacts;
		Estudiant actual(taula[z][0]);
		actual.afegir_nota(mitjana);
		resultat[z] = actual;
	}
	escriure_vector(resultat);
}
	

