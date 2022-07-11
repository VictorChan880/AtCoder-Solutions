#include <bits/stdc++.h>
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

int n,m, cnt, ans[MM], par[MM];
vector<int> adj [MM]; 
int find (int u) {
	if (par[u] != u) {
		par[u] = find(par[u]);
	}
	return par[u]; 
}
void merge (int u, int v) {
	if (find(u) != find(v)) {
		par[find(v)] = find(u);
		cnt--; 
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u,v; 
		cin >> u >> v;
		if (u > v) swap(u,v);
		adj[u].pb(v); 
	}
	for (int i = 1; i <= n; i++) par[i] = i;
	for (int i = n; i >= 1; i--) {
		for (int v : adj[i+1]) {
			merge(i+1,v);
		}
		ans[i] = cnt++; 
	}
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << nl; 
	}
}