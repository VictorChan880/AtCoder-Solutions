#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 1e5; 
const int MOD = 1e9+7;
const ll INF =  1e18;
typedef priority_queue<int, vector<int>, greater<int> > pq; 


int n; pq a,b,c;
int ans = 0; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i =0; i < n; i++) {int x; cin >> x; a.push(x); }
	for (int i =0; i < n; i++) {int x; cin >> x; b.push(x); } 
	for (int i =0; i < n; i++) {int x; cin >> x; c.push(x); }
	while (!a.empty()) {
		while (!b.empty() && a.top() >= b.top()) b.pop();
		while (!c.empty() && b.top() >= c.top()) c.pop(); 
		if (b.empty() || c.empty()) break; 
		a.pop(); b.pop(); c.pop();
		ans++; 
	}
	cout << ans << endl; 
	
}  