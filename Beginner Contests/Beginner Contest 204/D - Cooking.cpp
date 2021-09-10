#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 101;  
const int mod = 998244353 ;  


int n, t[MM], dp[101][(int)1e5+1], sum = 0; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; 
	for (int i =1; i <= n; i++) {
		cin >> t[i]; 
		sum += t[i]; 
	}
	for (int i = 0; i <= n; i++) dp[i][0] = true; 
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= (int)sum; j++) {
			if (dp[i-1][j]) dp[i][j] = true; 
			if (j >= t[i] && dp[i-1][j-t[i]]) dp[i][j] = true; 
		}
	}
	int ans = 1e9; 
	for (int i = sum/2; i <= sum; i++ ) {
		if (dp[n][i]) ans = min(ans, max(i, sum-i)); 
	}
	cout << ans << endl; 
}
