#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 2e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int n;
pi g[MM]; 
map<ll,ll>_map;
map<pi,ll>_map2; 
ll bit[MM]; 
void update (int idx, ll val) {
	for (int i = idx; i < MM; i+= i & -i) bit[i] += val; 
}
ll query (int idx) {
	ll ret = 0; 
	for (int i = idx; i > 1; i-= i & -i) ret += bit[i];
	return ret; 
}
auto cmp = [](const pi& x, const pi& y) {
	if (x.f == y.f) return x.s > y.s;
	else return x.f < y.f; 
};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n ;
	for (int i = 0; i < n; i++) {
		cin >> g[i].f;
	}
	for (int i = 0; i < n; i++) {
		cin >> g[i].s; _map[g[i].s] = 0;
	}
	int cnt = 2;
	sort(g,g+n,cmp); 
	for (int i = 0; i < n; i++) {
		_map2[{g[i].f,g[i].s}]++; 
	}
	for (pi x : _map) {
		_map[x.f] = cnt++;
	}
	ll ans = n; 
	for (pair< pi,ll> x : _map2) {
		ans += (x.s * (x.s-1))/2;
	}
	for (int i = 0; i < n; i++) {
		ans += i - query (_map[g[i].s]-1);
		update(_map[g[i].s], 1); 
	}
	cout << ans << nl; 
}
