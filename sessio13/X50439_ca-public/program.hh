#include "Pila.hh"

Pila& operator=(const Pila& original) {
/* Pre: cert */
/* Post: El p.i. passa a ser una còpia d'original i qualsevol
   contingut anterior del p.i. ha estat esborrat (excepte si el
   p.i. i original ja eren el mateix objecte) */
    if(altura == 0) {
        if(original.altura != 0) { //PI I ORIGINAL BUIDES
            primer_node = original.primer_node;
            altura = original.altura;
        }
    }
    else {
        if(original.altura == 0) {
            primer_node = NULL;
            altura = 0;
        }
        else { //NO SON BUIDES
            if(primer_node != original.primer_node) {
                esborra_node_pila_it(primer_node);
                primer_node = original.primer_node;
                altura = original.altura;
            }
        }
    }
}