#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod1 = 1e9+7;  
const int mod2 = 1e9+11;  
int n, m, a[MM]; 
set <int> _set; 
vector <int> ans; 
void prime_factorize (int x) {
	if (x % 2 == 0) {
		if (_set.count(2) == 0) {
			for (int j = 2; j <= m; j+=2) {
				_set.insert(j); 
			}
		}
	} 
	while (x % 2== 0) {
		x/= 2; 
	}
	for (int i = 3; i <= sqrt(x); i+=2) {
		if (x%i == 0) {
			if (_set.count(i) == 0) {
				for (int j = i; j <= m; j+=i) {
					_set.insert(j); 
				}
			}
		}
		while (x%i == 0) {
			x/= i; 
		}
	}
	if (x > 2) {
		if (_set.count(x) == 0) {
			for (int j = x; j <= m; j+=x) {
				_set.insert(j); 
			}
		}
	}
}
int main() {
    cin >> n >> m;
    for (int i = 0 ;i < n; i++) {
    	cin >> a[i]; 
    	prime_factorize(a[i]); 
    }
    for (int i = 1; i <= m; i++) {
    	if (_set.count(i) == 0) ans.pb(i); 
    }
    cout << ans.size() << endl; 
    for (int x : ans) cout << x << endl; 
    
}