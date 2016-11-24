#include <queue>
#include <iostream>
#include "CuaIOEstudiant.hh"

void LlegirCuaEstudiant(queue<Estudiant> &q) {
	int x;
	cin >> x;
	for(int i = 0; i < x; ++i) {
		Estudiant est;
		est.llegir();
		q.push(est);
	}
}

void EscriureCuaEstudiant(queue<Estudiant> q) {
	while(not q.empty()) {
		Estudiant est;
		est = q.front();
		est.escriure();
		q.pop();
	}
}
