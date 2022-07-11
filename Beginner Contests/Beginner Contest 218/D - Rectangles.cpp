#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2001;  
const int mod = 998244353 ;  

int n,x,y;
map <pi, int> _map; 
vector<pi> cord; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		_map[{x,y}]++; 
		cord.pb({x,y}); 
		
	}
	int ans = 0; 
	for (int i = 0; i < (int)cord.size(); i++) {
		if (_map[cord.at(i)] == 0) continue;  
		for (int j = 0; j < (int)cord.size(); j++) {
			if (cord[i].f == cord[j].f  || cord[j].s == cord[i].s) continue; 
			int x1 = cord[i].f, y1 = cord[j].s, x2 = cord[j].f, y2 = cord[i].s;
			int cnt = min(_map[cord.at(j)], min (_map[{x1,y1}], _map[{x2,y2}])); 
			ans += cnt;

		}
	}
	cout << ans/4 << endl; 
}
