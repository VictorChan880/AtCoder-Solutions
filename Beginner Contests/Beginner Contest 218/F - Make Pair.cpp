#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 805;  
const int mod = 998244353 ;  


ll n, m, a,b, dp[MM][MM], fact[MM]; 
bool match [MM][MM], vis[MM][MM]; 
ll nCk (int N, int k) {
	if (N == k) return 1; 

    if (N < k||k<0) {
    	return 0LL; 
    }
  
	return (fact[N] / (fact[k] * fact[N-k])%mod); 
}
ll solve (int L, int R) {
	if (vis[L][R]) return dp[L][R];
	if (R<L) {vis[L][R] = 1;return dp[L][R] = 1;}
	for (int i = L+1; i <= R; i++) {
		if ((i-L)%2==0||!match[i][L]) continue;
		 dp[L][R] += (solve(L+1, i-1) * solve(i+1, R) * nCk((R-L+1)/2,(i - L +1)/2))%mod; 
	}
	vis[L][R] = 1;
	return dp[L][R]%mod; 
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m; 
	fact[0] = 1; fact[1] = 1;
	for (int i = 2; i <= 400; i++) {
		fact[i] =( i * fact[i-1])%mod; 
	}
	for (int i =0; i < m; i++) {
		cin >> a >> b;
		match[a][b] = match[b][a] = true; 	
	}
	cout << solve(1,2*n)%mod << endl; 
}
