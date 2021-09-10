#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod1 = 1e9+7;  
const int mod2 = 1e9+11;  
ll n; 
int main(){
	cin >> n;
	for (ll i = 0; i <= 60; i++) {
		if ((1ULL<<i) <= n  && (1ULL<<(i+1)) > n) {
			cout << i << endl;
			break; 
		}
	}
	
}