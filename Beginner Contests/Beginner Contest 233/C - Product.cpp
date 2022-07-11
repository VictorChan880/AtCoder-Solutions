#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int n,l, ans; 
ll x; 
vector <ll> a[MM]; 
void recurse (int idx, ll val) {
	if (val > x) {
		return; 
	}
	if (idx == n) {
		if (val == x) ans++;
		return;  
	}
	for (int i = 0; i < a[idx].size(); i++) {
		recurse (idx+1, val * a[idx].at(i)); 
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> x; 
	for (int i = 0; i < n; i++) {
		cin >> l;
		for (int j = 0; j < l; j++) {
			int b; 
			cin >> b;
			a[i].pb(b);
		}
	}
	for (int i = 0; i < a[0].size(); i++) {
		recurse(1,a[0].at(i)); 
	}
	cout << ans << nl; 
}
