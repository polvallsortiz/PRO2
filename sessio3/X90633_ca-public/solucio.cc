#include "Cjt_estudiants.hh"

void Cjt_estudiants::afegir_estudiant(const Estudiant &est, bool& b)
{
	int i = 0;
	b = false;
	while(not b and i < nest) {
		if(vest[i].consultar_DNI() == est.consultar_DNI()) b = true;
		else ++i;
	}
	if(not b) {
		++nest;
		vest[nest-1] = est;
		ordenar_cjt_estudiants();
		if(est.te_nota()) {
			suma_notes += est.consultar_nota();
			++nest_amb_nota;
		}
	}
}

void Cjt_estudiants::esborrar_estudiant(int dni, bool& b)
{
	int i = 0;
	int m = nest;
	b = false;
	while(not b and i < m) {
		if(vest[i].consultar_DNI() == dni) b = true;
		else ++i;
	}
	if(b) {
		swap(vest[m-1],vest[i]);
		--nest;
		if(vest[m-1].te_nota()) {
			--nest_amb_nota;
			suma_notes -= vest[m-1].consultar_nota();
		}
	}
	ordenar_cjt_estudiants();
}
