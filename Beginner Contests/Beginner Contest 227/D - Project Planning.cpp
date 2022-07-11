#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< long,long > pi; 
const int MM = 2e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
ll n, ans,k, a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll l = 1, r = 1e18/k; 
	while (l <= r) {
		ll p = (l+r)/2; 
		ll sum = 0; 
		for (int i = 0; i < n; i++) {
			sum += min(a[i], p);
		}
		if (sum >= p * k) {
			l = p+1;
			ans = p;
		}
		else r= p-1; 
	}
	cout << ans << nl; 
}	