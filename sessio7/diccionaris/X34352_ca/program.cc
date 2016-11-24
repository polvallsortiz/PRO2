#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string,int> dicc;
	string actual,accio;
	while(cin >> accio >> actual) {
		if(accio == "a") ++dicc[actual];
		else cout << dicc[actual] << endl;
	}
}
