#include "matrizIOint.hh"

void leer_matriz_int(Matriz& m)
{
  int numfil;
  cin >> numfil;  
  int numcol;
  cin >> numcol;
  m = Matriz(numfil, vector<int>(numcol));  
  for (int i=0; i<numfil; ++i) {
      for (int j=0; j<numcol;++j) cin >> m[i][j];
  }
}

void escribir_matriz_int(const Matriz& m) 
{
  for (int i=0; i<m.size(); ++i) {
    for (int j=0; j<m[0].size();++j) // truco para saber el número
      cout << m[i] [j] << " ";       // de columnas; sólo es útil si
    cout << endl;                    // todas son de la misma dimensión 
  }
}

