#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct classificacio {
	int numequip,punts,golsmes,golsmenys;
};

bool comp(const classificacio& a, const classificacio& b) {
	if (a.punts != b.punts) return a.punts > b.punts;
	else {
		if((a.golsmes - a.golsmenys) != (b.golsmes - b.golsmenys)) return (a.golsmes - a.golsmenys) > (b.golsmes - b.golsmenys);
		else return a.numequip < b.numequip;
	}
}

int main() {
	int n;
	cin >> n;
	vector<classificacio> taulaclass(n);
	for(int z = 0; z < n; ++z) {
		taulaclass[z].numequip = z+1;
		taulaclass[z].punts = 0;
		taulaclass[z].golsmes = 0;
		taulaclass[z].golsmenys = 0;
	}
	int eq1,eq2;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> eq1 >> eq2;
			if(i != j) {
				taulaclass[i].golsmes += eq1;
				taulaclass[i].golsmenys += eq2;
				taulaclass[j].golsmes += eq2;
				taulaclass[j].golsmenys += eq1;
				if(eq1 > eq2) taulaclass[i].punts += 3;
				if(eq1 < eq2) taulaclass[j].punts += 3;
				if(eq1 == eq2) {
					++taulaclass[i].punts;
					++taulaclass[j].punts;
				}
			}
		}
	}
	sort(taulaclass.begin(),taulaclass.end(),comp);
	for(int s = 0; s < n; ++s) cout << taulaclass[s].numequip << " " << taulaclass[s].punts << " " << taulaclass[s].golsmes << " " << taulaclass[s].golsmenys << endl;
}
