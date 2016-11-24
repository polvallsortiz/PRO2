#include <iostream>
#include <stack>
#include "PilaIOParInt.hh"

void llegirPilaParInt(stack<ParInt>& p) {
	ParInt par;
	while(par.llegir()) {
		p.push(par);
	}
}

void escriurePilaParInt(stack<ParInt> p) {
	while(not p.empty()) {
		p.top().escriure();
		p.pop();
	}
}

