#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7;  

int n;
set<pair <string,string> > _set;
string s, t;

int main() {
	cin >> n;
	for (int i =0 ; i< n; i++) {
		cin >> s >> t;
		_set.insert ({s,t});
	}
	if (_set.size() < n) cout << "Yes" << endl;
	else cout << "No" << endl; 

}