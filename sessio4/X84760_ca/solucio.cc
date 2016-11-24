#include "Cjt_estudiants.hh"

void Cjt_estudiants::afegir_estudiant(const Estudiant &est, bool& b)
{
	b = false;
	int i = 0; 
	while(i < nest and not b) {
		if(vest[i].consultar_DNI() == est.consultar_DNI()) b = true;
		else ++i; 
	}
	if(not b) {
		vest[nest] = est;
		++nest;
		ordenar();
		i = 0;
		bool trobat = false;
		while(i < nest and not trobat) {
			if(vest[i].consultar_DNI() == est.consultar_DNI()) trobat = true;
			else ++i;
		}
		if(est.te_nota()) {
			if(est.consultar_nota() > vest[imax].consultar_nota()) imax = i;
		}
	}
}

void Cjt_estudiants::eliminar_estudiants_sense_nota()
{
	if(imax == -1) nest = 0;
	else {
		int i = 0;
		while(i <= nest) {
			if(not vest[i].te_nota()) {
				vest[i] = vest[nest-1];
				--nest;
			}
			++i;
		}
	}
}
