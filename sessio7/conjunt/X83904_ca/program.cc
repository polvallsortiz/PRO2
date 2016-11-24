#include <iostream>
#include <set>
#include <string>
using namespace std;

void llegircognoms(set<string> &s) {
	string actual;
	cin >> actual;
	while(actual != ".") {
		s.insert(actual);
		cin >> actual;
	}
}

void activitat(set<string> &totes, set<string> &cap) {
	set<string> activity;
	string act;
	cin >> act;
	while(act != ".") {
		cap.erase(act);
		activity.insert(act);	
		cin >> act;
	}
	set<string>::iterator it = totes.begin();
	while(it != totes.end()) {
		if(activity.find(*it) == activity.end()) it = totes.erase(it);
		else ++it;
	}
}


int main() {
	set<string> cognoms;
	llegircognoms(cognoms);
	int numacts;
	cin >> numacts;
	set<string> totes = cognoms;
	set<string> cap = cognoms;
	while(numacts != 0) {
		activitat(totes,cap);
		--numacts;
	}
	cout << "Totes les activitats:";
	for(set<string>::const_iterator it = totes.begin(); it != totes.end(); ++it) cout << " " << *it;
	cout << endl << "Cap activitat:";
	for(set<string>::const_iterator it2 = cap.begin(); it2 != cap.end(); ++it2) cout << " " << *it2;
	cout << endl;
}
