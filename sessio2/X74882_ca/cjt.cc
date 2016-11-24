#include <iostream>
#include "Cjt_estudiants.hh"
#include "Estudiant.hh"
using namespace std;

void actualitzar (Cjt_estudiants &c1, const Cjt_estudiants &c2) {
	for(int i = 1; i <= c1.mida(); ++i) {
		Estudiant primer,segon;
		primer = c1.consultar_iessim(i);
		segon = c2.consultar_iessim(i);
		if(primer.te_nota() and segon.te_nota()) {
			if(primer.consultar_nota() < segon.consultar_nota()) primer.modificar_nota(segon.consultar_nota());
		}
		if(not primer.te_nota() and segon.te_nota()) primer.afegir_nota(segon.consultar_nota());
		c1.modificar_iessim(i,primer);	
	}
}

int main() {
	Cjt_estudiants primer,segon;
	primer.llegir();
	segon.llegir();
	actualitzar(primer,segon);
	primer.escriure();
}

