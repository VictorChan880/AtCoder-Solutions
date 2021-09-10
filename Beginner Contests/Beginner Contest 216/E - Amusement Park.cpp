#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7;  

ll n,x, k, a[MM],ans = 0; 

int main() {
	cin >> n >> k;
	for (int i = 0; i< n;i++) {
		cin >> a[i];
	}
	sort (a, a+n, greater<ll>());
	for (int i = 0; i < n; i++) {
		ll N = ((i+1) * (a[i] - a[i+1])); 
		if (k >= N) {
			ans +=  (N * (a[i] + a[i+1] + 1))/ 2; 
			k-= N; 
		}
		else {
			ll v = k/(i+1);
			k %= i+1; 
			ans += (v *(i+1) * (a[i] + a[i] - v + 1))/2; 
			ans += (k * (a[i] - v)) ;
			break; 
		}
	}
	cout << ans << endl; 
}