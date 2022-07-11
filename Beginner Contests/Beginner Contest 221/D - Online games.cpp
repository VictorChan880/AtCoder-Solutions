#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 4e5+3;   
const int mod = 1e9 + 7; 
int n; int ans[MM];  
int psa[MM], a[MM], b[MM];
map<int, int> _map, _map2;  
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		_map[a[i]] = 0; _map[a[i] + b[i]] = 0;  
	}
	int idx = 1; 
	for (pi x : _map) {
		_map[x.f] = idx; 
		_map2[idx++] = x.f; 
	}
	for (int i = 0; i < n; i++) {
		psa[_map[a[i]]]++; psa[_map[a[i] + b[i]]]--;  
	}
	for (int i = 1; i < idx-1; i++) {
		psa[i] += psa[i-1]; 
		if (psa[i] > 0)ans[psa[i]] +=  _map2[i+1] - _map2[i]; 
	}
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << " "; 
	}
	cout << endl; 
}
