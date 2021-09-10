#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7; 
int n, u, v; 
bool vis[MM]; 
vector <int> adj[MM]; 
void dfs (int u) {
	vis[u] = true;
	cout << u << " "; 
	bool flag = false; 
	for (int v : adj[u]) {
		if (!vis[v]) {
			flag = true; 
			dfs(v);
			cout << u << " ";
		}
	}
 
}
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i =0; i < n-1; i++) {
		cin >> u >> v; 
		adj[u].pb(v); 
		adj[v].pb(u);
	} 
	for (int i =1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end()); 
	} 
	dfs(1); 
	cout << endl; 	
 
 
 	
 
 	
	
}