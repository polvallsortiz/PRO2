#include <iostream>
using namespace std;

int main()
{
  int x, res;
  cin >> x;
  while(x != 0) {
	  res += x;
	  cin >> x;
  }
  cout << res << endl;
}

