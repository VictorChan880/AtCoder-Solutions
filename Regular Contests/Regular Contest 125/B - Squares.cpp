#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6 + 1; 
const int mod = 998244353;  

ll n; 
int main() {
    cin >> n;
    ll ans = 0; 
    for (ll i = 1; i * i <= n; i++) {
    	ll lim = n/i; 
    	ans += ((n/i - i)/2 + 1)%mod; 
    }
    ans %= mod; 
    cout << ans << endl; 
}