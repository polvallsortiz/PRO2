#include "Cua.hh"
#include "CuaIOint.hh"
using namespace std;

int main() {
    Cua<int> c;
    llegir_cua_int(c,-1);
    Cua<int> aconcatenar;
    llegir_cua_int(aconcatenar,-1);
    c.concat(aconcatenar);
    escriure_cua_int(c);
}
