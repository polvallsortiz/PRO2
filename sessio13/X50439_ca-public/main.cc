#include "Pila.hh"
#include "PilaIOint.hh"
using namespace std;

int main() {
    Pila<int> c;
    llegir_pila_int(c,-1);
    Pila<int> d;
    llegir_pila_int(d,-1);
    c = d;
    escriure_pila_int(c);
}
