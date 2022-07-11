#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
const int MM = 3e5+2;   
const int mod = 998244353; 
ll ans = 0; 
int a[MM]; 
ll n, bit[MM];  
ll inverse [MM], pow2[MM];
map<int,int> _map;

ll power (int x, int y) {
	if (y == 0) return 1;
	int tmp = power(x,y/2);
	tmp = (tmp * tmp)%mod;
	return (y % 2 == 1? (tmp * x)%mod : tmp); 
}
void update (int idx, int val) {
	while (idx < MM) {
		bit[idx] = (bit[idx] + val) % mod;
		idx += idx & -idx; 
	}
}
ll query (int idx) {
	ll ret = 0;
	while ( idx > 0) {
		ret = (ret + bit[idx])%mod; 
		idx -= idx & -idx; 
	} 
	return ret; 
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		pow2[i] = power(2,i); 
	}
	for (int i = 0; i < n; i++) {
		inverse[i] = power(pow2[i], mod-2); 
		cerr << inverse[i] << endl; 
	}
	for (int i =0; i < n; i++) {
		cin >> a[i];_map[a[i]] = 0;  
	}
	int idx = 1;
	for (auto x : _map) {
		_map[x.f] = idx++; 
	}
	for (int i = 1; i < n; i++) {
		ans += pow2[i-1] * query(a[i]); 
		update(_map[a[i]], inverse[i]); 
	}
	cout << ans << endl; 
}

