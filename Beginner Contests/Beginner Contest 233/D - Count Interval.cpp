#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 2e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int n; 
ll ans, k, a[MM]; 

map<ll,ll> _map; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	} 
	if (a[0] == k) ans++; 
	_map[0]++;
	_map[a[0]]++;  
	for (int i = 1; i < n; i++) {
		a[i] += a[i-1];
		ans += _map[a[i]-k];
		_map[a[i]]++;
	}
	cout << ans << nl; 	
}
