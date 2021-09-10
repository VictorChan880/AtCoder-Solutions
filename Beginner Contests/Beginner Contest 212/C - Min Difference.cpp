#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 2e5; 
const int mod = 1e9+7; 
string x; 
int ans = 1e9; 
vector <int>a, b;int n ,m; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n ; i++) {
		int x;
		cin >> x; 
		a.pb(x);
	}
	for (int i = 0; i < m ; i++) {
		int x;
		cin >> x; 
		b.pb(x);
	}	
	sort(a.begin(),a.end());	
	sort(b.begin(),b.end());

	for (int i = 0; i < n; i++) {
		auto idx = lower_bound(b.begin(),b.end(),a[i]); 
		if (idx != b.end()) ans = min(ans,b[idx-b.begin()]-a[i]);
	}
	for (int i = 0; i < m; i++) {
		auto idx = lower_bound(a.begin(),a.end(),b[i]); 
		if (idx != a.end()) ans = min(ans,a[idx-a.begin()]-b[i]);
	}
	for (int i = 0; i < n; i++) {
		auto idx = upper_bound(b.begin(),b.end(),a[i]); 
		if (idx != b.end()) ans = min(ans,b[idx-b.begin()]-a[i]);
	}
	for (int i = 0; i < m; i++) {
		auto idx = upper_bound(a.begin(),a.end(),b[i]); 
		if (idx != a.end()) ans = min(ans,a[idx-a.begin()]-b[i]);
	}
	cout << ans << endl; 
	}

