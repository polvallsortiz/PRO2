#include <iostream>
#include <vector>
using namespace std;

struct parint {
	int max;
	int min;
};

void llegir_vec_int(vector<int>& v) {
	int mida,aux;
	cin >> mida;
	for(int s = 0; s < mida; ++s) {
		cin >> aux;
		v.push_back(aux);
	}
}

parint max_min_struct(const vector<int>& v) {
	int size = v.size();
	parint resultat;
	resultat.max = resultat.min = v[0];
	for(int i = 1; i < size; ++i) {
		if(v[i] > resultat.max) resultat.max = v[i];
		if(v[i] < resultat.min) resultat.min = v[i];
	}
	return resultat;
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

void max_min_parametre(const vector<int>& v, int& max, int& min) {
	int size2 = v.size();
	max = min = v[0];
	for(int z = 1; z < size2; ++z) {
		if(v[z] > max) max = v[z];
		if(v[z] < min) min = v[z];
	}
}

int main() {
	vector<int> vec;
	llegir_vec_int(vec);
	parint res1 = max_min_struct(vec);
	cout << res1.max << " " << res1.min << endl << endl;
	pair<int,int> res2 = max_min_pair(vec);
	cout << res2.first << " " << res2.second << endl << endl;
	int max,min;
	max_min_parametre(vec,max,min);
	cout << max << " " << min << endl << endl;
}

 
