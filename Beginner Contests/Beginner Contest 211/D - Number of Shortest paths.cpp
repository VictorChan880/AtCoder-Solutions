#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2e5+1; 
const int mod = 1e9+7;  

int n, m;
vector<int> adj[MM]; 
pi dis[MM]; 
int main() {
	cin >> n >> m; 
	for (int i = 0; i < m; i++) {
		int u,v; 
		cin >> u >> v; 
		adj[u].pb(v);
		adj[v].pb(u);
	}
	for (int i = 0; i < n; i++) dis[i+1].f = 1e9; 

	list<int> q; 
	q.pb(1); 
	dis[1].f = 0; dis[1].s = 1; 
	while (!q.empty()) {
		int u = q.front(); q.pop_front();
		for (int v : adj[u]) {
			if (dis[v].f == 1e9) {
				dis[v].f = dis[u].f + 1 ;
				dis[v].s = dis[u].s;
				q.pb(v); 
			}
			else if (dis[v].f == dis[u].f + 1) {
				dis[v].s = (dis[v].s + dis[u].s)%mod; 
			}
		}
	}

	cout << dis[n].s%mod << endl; 
}