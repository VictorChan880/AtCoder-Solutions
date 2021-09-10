#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, pair<int,int>> pi; 
#define mp make_pair
#define pb push_back 
#define f first
#define s second
const int MM = 1e6; 
const int mod = 1e9+7; 

int par[MM]; 
int _size[MM];  
int n; 
ll ans = 0; 
int find (int u) {
	if (par[u] != u) {
		par[u] = find(par[u]);
	}
	return par[u]; 
}
void merge (int u, int v) {
	int par_u = find(u), par_v = find(v); 
	if (par_u != par_v) {
		par[par_v] = par_u;
		_size[par_u] += _size[par_v]; 
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i =1; i <= n; i++) {
		par[i] = i; 
		_size[i] = 1; 
	}
	priority_queue<pi, vector<pi>, greater<pi> >pq;

	for (int i =0; i < n-1; i++) {
		int u, v, w;
		cin >> u >> v >> w; 
		pq.push ({w,{u,v}}); 
	}
	while (!pq.empty()) {
		int u = pq.top().s.f, v = pq.top().s.s;
		ans += pq.top().f * _size[find(u)] * _size[find(v)]; 
		merge(u,v);
		pq.pop(); 
	}
	cout << ans << endl; 

}