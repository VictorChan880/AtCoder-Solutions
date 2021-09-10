#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<ll,ll> pi;
const ll MM = 1e5;
ll a[MM], k, low[MM];    
int n, q; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> q;
	for (int i = 0; i< n; i++) {cin >> a[i]; low[i] = a[i] - (i+ 1); }
	sort (a, a+n);
	for (int i = 0; i < q; i++) {
		cin >> k; 
		int idx = lower_bound( low,low+n, k) -low; 
		if (idx == n) cout << a[n-1] - low[n-1] + k << endl;
		else cout << a[idx]-1 - low[idx] + k << endl;

	}
 
}