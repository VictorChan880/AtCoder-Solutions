#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 3e5 ; 
const int mod = 1e9+7; 
int n, k, c[MM], ans =0; 
deque<int> dq; 
map<int, int> _map; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n  >> k; 
	for (int i = 0; i < n; i++) cin >> c[i];
	for (int i = 0; i < n; i++) {
		if (!dq.empty() &&i - k+1 > dq.front()) {
			_map[c[dq.front()]]--;  
			if (_map[c[dq.front()]] == 0) _map.erase(c[dq.front()]); 
			dq.pop_front(); 
		}
		_map[c[i]]++;
		dq.push_back(i); 
		ans = max((int)_map.size(), ans); 
	}
	cout << ans << endl; 
}