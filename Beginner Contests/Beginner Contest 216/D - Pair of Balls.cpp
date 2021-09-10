#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 3e5; 
const int mod = 998244353 ;  

stack<int> stk[MM]; 
map <int, int> _map; 
int n, m, k, x;  
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i =0; i < m; i++) {
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> x; 
			stk[i].push(x); 
		}
	}
	queue<int> q; 
	for (int i = 0; i < m; i++) q.push(i); 
	while (!q.empty()) {
		int cur = q.front(); 
		q.pop();
		if (stk[cur].empty()) continue; 
		int a = stk[cur].top();
		if (_map.count(a) !=  0) {
			q.push(cur); 
			q.push(_map[a]);
			stk[_map[a]].pop();
			stk[cur].pop(); 
			_map.erase(a); 
		}
		else _map[a] = cur; 
	}
	bool ans = true; 
	for (int i = 0; i< m; i++) {
		if (!stk[i].empty()) {
			ans = false;
			break; 
		}
	}
	cout << (ans? "Yes" : "No") << endl; 
}
