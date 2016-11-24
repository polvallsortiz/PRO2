#include "Cjt_estudiants.hh"

void Cjt_estudiants::afegir_estudiant(const Estudiant &est, bool& b)
{
	b = false;
	int i = 0;
	while(i < 10 and not b) {
		if(vest[i].consultar_DNI() == est.consultar_DNI()) b = true;
		++i;
	}
	if(not b) {
		++nest;
		vest[nest-1] = est;
		ordenar();
		if(est.te_nota()) incrementar_interval(est.consultar_nota());
	}
}

void Cjt_estudiants::esborrar_estudiant(int dni, bool& b)
{
	b = false;
	int i = 0; 
	while(i < 10 and not b) {
		if(vest[i].consultar_DNI() == dni) b = true;
		else ++i;
	}
	if(b) {
		if(vest[i].te_nota()) decrementar_interval(vest[i].consultar_nota());
		vest[i] = vest[nest-1];
		--nest;
		ordenar();
	}
}
