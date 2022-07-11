#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 30+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int ans = 2e9, n, a[MM]; 
void recurse (int idx, int _or, int _xor) {
	if (idx == n-1) {
		ans = min(_xor^_or^a[idx],ans); 
		ans = min(_xor^(_or|a[idx]),ans); 
		return; 
	}
	recurse(idx+1, a[idx], _xor^_or);
	recurse(idx+1, _or|a[idx], _xor); 
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	if (n == 1) {
		cout << a[0] << nl;
		return 0; 
	}
	recurse(0,0,0); 
	cout << ans << nl; 
}