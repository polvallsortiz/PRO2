#include <iostream>
#include <vector>
using namespace std;

void llegir_vec_int(vector<int>& v) {
	int mida,aux;
	cin >> mida;
	for(int s = 0; s < mida; ++s) {
		cin >> aux;
		v.push_back(aux);
	}
}

pair<int,int> max_min_pair(const vector<int>& v) {
	int size1 = v.size();
	pair<int,int> res;
	res.first = res.second = v[0];
	for(int j = 1; j < size1; ++j) {
		if(v[j] > res.first) res.first = v[j];
		if(v[j] < res.second) res.second = v[j];
	}
	return res;
}


int main() {
	vector<int> vec;
	llegir_vec_int(vec);
	pair<int,int> resultat = max_min_pair(vec);
	cout << resultat.first << " " << resultat.second << endl;
}

 
