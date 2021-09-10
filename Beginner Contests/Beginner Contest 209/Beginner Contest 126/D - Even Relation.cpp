#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int mod = 1e9+7; 
const int MM = 1e5+1; 
int n; 
ll dis [MM]; 
bool vis[MM]; 
vector<pi> adj[MM]; 
void dfs(int u) {
	vis[u] = true;
	for (pi v: adj[u]) {
		if (!vis[v.first]) {
			dis[v.first] = dis[u]+v.second; 
			dfs(v.first); 
		}
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		int u, v,w;
		cin >> u >> v >>w ;
		adj[u].push_back({v,w}); 
		adj[v].push_back({u,w}); 

	}
	dfs(1); 
	for (int i =1; i <= n; i++) {
		cout << dis[i]%2 << endl; 
 	}
}	