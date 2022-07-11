#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,ll > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2e5+1;   
const int mod = 998244353; 
int dis[MM], n, sub[MM]; ll ans[MM]; 
bool vis[MM]; 
vector<int> adj[MM]; 
int dfs (int u) {
	vis[u] = true; 
	for (int v : adj[u]) {
		if (!vis[v]){
			dis[v] =dis[u] + 1; 
			sub[u] += dfs(v); 
		}
	}
	return sub[u]; 
}
void dfs2 (int u, int par) {
	if (u != 1)ans[u] = ans[par] + n - 2 * sub[u]; 
	for (int v : adj[u]) {
		if (ans[v] == 0) dfs2(v,u); 
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; 
	for (int i = 0; i < n; i++) {
		int u,v; 
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
		sub[u] = sub[v] = 1;  
	}
	dis[1] = 0; 
	dfs (1); 
	for (int i = 1; i <= n; i++) {
		ans[1] += dis[i];
	}
	dfs2(1, 0); 
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << endl; 
	}
}

