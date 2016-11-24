#include <iostream>
#include <list>
using namespace std;

struct par_int {
	int primer,segon;
};

void llegir_llista_par_int(list<par_int>& l) {
	list<par_int>::iterator iterador = l.begin();
	int x,y;
	cin >> x >> y;
	par_int actual;
	while(x != 0 and y != 0) {
		actual.primer = x;
		actual.segon = y;
		l.insert(iterador,actual);
		cin >> x >> y;
	}
}

void sum_parelles_repeticions(const list<par_int> l, int x, int& rep, int& sum) {
	list<par_int>::const_iterator it;
	par_int act;
	for(it = l.begin(); it != l.end(); ++it) {
		act = *it;
		if(act.primer == x) {
			++rep;
			sum += act.segon;
		}
	}
}

int main() {
	list<par_int> llista;
	llegir_llista_par_int(llista);
	int repeticions,suma,a_consultar;
	cin >> a_consultar;
	repeticions = suma = 0;
	sum_parelles_repeticions(llista,a_consultar,repeticions,suma);
	cout << a_consultar << " " << suma << " " << repeticions << endl;
}
