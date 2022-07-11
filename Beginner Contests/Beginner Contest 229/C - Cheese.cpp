#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 3e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int n,w;
pi a [MM]; ll ans; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> w; 
	for (int i =0; i < n; i++) {
		cin >> a[i].f >> a[i].s;
	} 
	sort(a,a+n);
	for (int i = n-1; i >= 0 && w > 0; i--) {
		if (a[i].s <= w) {
			w -= a[i].s;
			ans += a[i].f * a[i].s;
		}
		else {
			ans += a[i].f * w;
			w = 0; 
		}
	}
	cout << ans << nl; 
}