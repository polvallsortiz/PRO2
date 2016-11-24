#include <iostream>
#include "vectorIOint.hh"
using namespace std;

int main() {
	vector<int> vec;
	leer_vector_int(vec);
	int pos1,pos2;
	cout << "Introduir dos posicions a intercanviar: ";
	cin >> pos1 >> pos2;
	cout << endl;
	intercanviar_posicions_vector_int(vec,pos1,pos2);
	escribir_vector_int(vec);
}
