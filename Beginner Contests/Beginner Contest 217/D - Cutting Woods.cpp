#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e9+1; 
const int mod = 998244353 ;  


int q, x, l, c; 	  
vector <int> range;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> l >> q;
	range.pb(0); range.pb(l);  
	for (int i = 0; i < q; i++) {
		cin >> c >> x;
		if (c == 2) {
			int idx = upper_bound(range.begin(), range.end(), x) - range.begin();
			cout << range.at(idx) - range.at(idx-1) << endl;
		}
		else {
			int idx = lower_bound(range.begin(), range.end(),x) - range.begin(); 
			range.insert(range.begin()+idx, x); 
		}
	}
	
}
