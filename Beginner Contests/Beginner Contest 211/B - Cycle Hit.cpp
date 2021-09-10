#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 3001; 
const int mod = 998244353;  

string s; 
set<string> _set; 
int main() {
	for (int i = 0; i < 4; i++) {
		cin >> s;
		_set.insert(s);
	}
	if (_set.size() == 4) cout << "Yes" << endl;
	else cout << "No"<< endl; 
}