#include "Cua.hh"

void concat(Cua &c) {
/* Pre: c=C */
/* Post: el p.i. passa a ser la concatenació de C al paràmetre implícit, c és buida */
    if(longitud == 0) { // CUA DEL P.I. ES BUIDA
        if(c.mida() != 0) {
            primer_node = c.primer_node;
            ultim_node = c.ultim_node;
            longitud = c.mida();
            c.longitud = 0;
            c.primer_node = NULL;
            c.ultim_node = NULL;
        }
    }
    else { //CUA DEL P.I. NO ES BUIDA
        if(c.mida() != 0) {
            ultim_node->seguent = c.primer_node;
            ultim_node = c.ultim_node;
            longitud += c.mida();
            c.longitud = 0;
            c.primer_node = NULL;
            c.ultim_node = NULL;
        }
    }
}
