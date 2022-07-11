#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,ll > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e5+1;   
const int mod = 998244353; 
ll a[MM], x, sum = 0; int n; 
map<int, int> _map; ll ans [MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	_map[(a[0] + a[1])%10]++; _map[((a[0] * a[1])%10)]++; 
	if (n == 2) {
		ans[(a[0] + a[1])%10]++; ans[(a[0] * a[1])%10]++;
	}
	for (int i = 2; i < n; i++) {
		vector <pi> lis; 
		for (pi x : _map) {
			lis.pb({(x.f + a[i])%10, x.s});
			lis.pb({(x.f * a[i])%10, x.s});
		}
		_map.clear(); 
		for (pi x : lis) {
			_map[x.f] = (_map[x.f] + x.s)%mod;
			if (i == n-1) ans[x.f] = (x.s + ans[x.f])%mod; 
		}
	}
	for (int i =0; i <= 9; i++) {
		cout << ans[i] << endl; 
	} 
	
}

