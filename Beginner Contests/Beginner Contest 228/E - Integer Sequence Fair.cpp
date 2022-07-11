#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef pair< int,int > pi; 
const int MM = 2e6+5;  
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
ll n,k,m; 
ll pow (ll x, ll exp, ll mod) {
	x%=mod; 
	if (exp == 0) return 1;
	ll tmp = pow(x, exp/2,mod);
	tmp = (tmp * tmp)%mod; 
	return (exp % 2 ? (tmp*x)%mod : tmp) ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);    
	cin >> n >> k >> m;
	ll mod = 998244353 ; 
	
	//find k^n % mod-1; 
	ll r = pow(k,n, mod-1); 
	if (m%mod==0) {
		cout << 0 << nl;
	}
	else cout << pow(m%mod,r,mod) << nl; 
}	