#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, pair<int,int> > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2e5+1;  
const int mod = 998244353 ;  

int n,m, u , v, w, par[MM]; 
int find (int x ) {
	if (par[x] != x) {
		par[x] = find(par[x]);
	}
	return par[x]; 
}
void merge (int x, int y) {
	par[find(y)] = par[find(x)]; 
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		par[i] = i; 
	}
	priority_queue<pi, vector<pi>, greater<pi> >pq;
	ll ans = 0; 
	for (int i = 0;i < m; i++) {
		cin >> u >> v >> w; 
		pq.push(mp(w, mp(u,v))); 
		ans += w; 
	}
	int edges = 0; 
	while (edges < n-1 && !pq.empty()) {
		pi cur = pq.top(); pq.pop();
		w = cur.f; u = cur.s.f; v = cur.s.s; 
		if (find(u) != find(v)) {
			merge(u,v);
			ans -= w; 
			edges++; 
		}
		else if (w <= 0) {
			ans -= w; 
		}
	}
	while (!pq.empty()) {
		if (pq.top().f < 0) {ans -= pq.top().f; pq.pop();} 
		else break; 
	}
	cout << max(ans,0LL) << endl; 

}
