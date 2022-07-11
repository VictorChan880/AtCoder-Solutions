#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 401;  
const int mod = 998244353 ;  

int n,m;
vector <pi> adj[MM]; 

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u,v; 
		cin >> u >> v;
		adj[u].pb({v, i+1});
	}
	queue<int> q; 
	for (int i = 1; i <= m; i++ ) {
		bool vis [MM]= {0}; 
		int dis [MM] = {0}; 
		q.push(1); 
		vis[1] = true; 
		while (!q.empty()) {
			int u = q.front(); q.pop();  
			for (pi v : adj[u]) {
				if (!vis[v.f] && v.s != i) {
					q.push(v.f);
					vis[v.f] = true;
					dis[v.f] = dis[u]+1; 
				}
			}
		}
		cout << (vis[n]? dis[n] : -1) << endl; 
	}
}
