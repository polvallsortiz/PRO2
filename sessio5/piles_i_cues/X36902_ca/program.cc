#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char>pila;
	bool correcte = true;
	string expressio;
	cin >> expressio;
	int pos = 0;
	int size = expressio.length();
	while(pos < size and correcte) {
		char actual = expressio[pos];
		if(actual == '(' or actual == '[') pila.push(actual);
		if(actual == ')') {
			if(pila.size() != 0) {
				if(pila.top() != '(') correcte = false;
				else pila.pop();
			}
			else correcte = false;
		}
		if(actual == ']') {
			if(pila.size() != 0) {
				if(pila.top() != '[') correcte = false;
				else pila.pop();
			}
			else correcte = false;
		}
		++pos;
	}
	if(correcte) cout << "Correcte" << endl;
	else cout << "Incorrecte" << endl;
}
