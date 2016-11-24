#include <iostream>
#include <list>
#include "Estudiant.hh"
using namespace std;

void llegir_est(list<Estudiant>& llista) {
	list<Estudiant>::iterator it = llista.begin();
	Estudiant actual;
	actual.llegir();
	while(actual.consultar_DNI() != 0 or actual.consultar_nota() != 0) {
		llista.insert(it,actual);
		actual.llegir();
	} 
}

int aparicions(const list<Estudiant> llista, int id) {
	int res = 0;
	list<Estudiant>::const_iterator it;
	Estudiant actual;
	for(it = llista.begin(); it != llista.end(); ++it) {
		actual = *it;
		if(actual.consultar_DNI() == id) ++res;
	}
	return res;
}

int main() {
	list<Estudiant> llista_est;
	llegir_est(llista_est);
	int x;
	cin >> x;
	cout << x << " " << aparicions(llista_est,x) << endl;
}
