#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7;  

int n, m, a[MM], t[MM]; ll ans = 0, dis= 1e9; 
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
		cin >> a[i];
    }
    int idx = 0; 
    for (int i =0; i < m; i++) {
    	cin >> t[i];
    	if (a[idx] != t[i]) {
    		for (int j = 1; j < n; j++) {
    			int l = (idx - j + n)%n, r = (idx + j ) % n; 
    			if (a[l] == t[i]) {
    				idx = l;
    				ans += j + 1;
    				break; 
    			} 
    			else if (a[r] == t[i]) {
    				idx = r;
    				ans += j + 1; 
    				break; 
    			}
    		}
    		if (a[idx] != t[i]) {
    			cout << -1 << endl;
    			return 0; 
    		}
    	}
    	else ans++; 
    }
    cout << ans << endl; 
}