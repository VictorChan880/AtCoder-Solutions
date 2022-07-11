#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
bool ans = true, vis [MM];
vector<int> adj[MM]; 
void dfs (int u, int par) {
	vis[u] = true;
	for (int v : adj[u]) {
		if (!vis[v]) dfs(v,u);
		else if (v != par) {
			ans = false; 
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, m; 
	cin >> n >> m;
	int start = 1; 
	for (int i = 0; i < m; i++) {
		int u , v;
		cin >> u >> v; 
		adj[u].pb(v);
		adj[v].pb(u);
		if (adj[u].size() > 2 || adj[v].size() > 2) {
			cout << "No" << nl;
			return 0; 
		}
		start = u; 
	} 
	for (int i = 1; i <= n; i++) {
		if(!vis[i]) dfs(i,0); 
	}
	cout << (ans ? "Yes" : "No") << nl; 
}
