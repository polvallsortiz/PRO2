#include <iostream>
#include <list>
using namespace std;

void recalcular_min_max(const list<int>& l, int& min, int&max) {
	int aux = min;
	min = max;
	max = aux;
	list<int>::const_iterator it;
	for(it = l.begin(); it != l.end(); ++it) {
		if(*it < min) min = *it;
		if(*it > max) max = *it;
	}
}

bool eliminar_seq(list<int>& l, int x) {
	list<int>::iterator it = l.begin();
	bool found = false;
	while(it != l.end() and not found) {
		if(*it == x)  {
			it = l.erase(it);
			found = true;
		}
		else ++it;
	}
	return found;
}

int main() {
	list<int> l;
	list<int>::iterator it = l.begin();
	int codi,nombre,maxim,minim,suma;
	double mitjana;
	cin >> codi;
	while(codi != 0) {
		cin >> nombre;
		if(codi == -1) {
			if(l.empty()) {
				minim = maxim = suma = nombre;
			}
			else {
				if(nombre < minim) minim = nombre;
				if(nombre > maxim) maxim = nombre;
				suma += nombre;
			}
			l.insert(it,nombre);
			mitjana = double(suma)/l.size();
			cout << minim << " " << maxim << " " << mitjana << endl;
		}
		if(codi == -2) {
			bool eliminat = eliminar_seq(l,nombre);
			if(eliminat) {
				if(l.empty()) cout << 0 << endl;
				else {
					recalcular_min_max(l,minim,maxim);
					suma -= nombre;
					mitjana = double(suma)/l.size();
					cout << minim << " " << maxim << " " << mitjana << endl;
				}
			}
			else {
				if(l.empty()) cout << 0 << endl;
				else cout << minim << " " << maxim << " " << mitjana << endl;
			}
		}
		cin >> codi;
	}
}
