#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 301;  
const int mod = 998244353 ; 
pi a [301]; int n, x, y; 
int dp[MM][MM][MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	cin >> x >> y; 
	for (int i = 1; i <= n; i++) {
		int A, B;
		cin >> A >> B;
		a[i] = {A,B};  
	}
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0][0] = 0; 
	int ans = 1e9; 
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 300; j++) {
			for (int k = 0; k <= 300; k++) {
				dp[i][j][k] = dp[i-1][j][k]; 
				dp[i][j][k] = min(dp[i-1][max(0,j-a[i].f)][k]+1, dp[i][j][k]);
				dp[i][j][k] = min(dp[i-1][j][max(0,k-a[i].s)]+1, dp[i][j][k]);
				dp[i][j][k] = min(dp[i-1][max(0,j-a[i].f)][max(0,k-a[i].s)]+1, dp[i][j][k]); 
				if (dp[i][j][k] > 0 && j >= x && k >= y) {
					ans = min(ans, dp[i][j][k]); 
				}
			}
		}
	}
	cout << (ans == 1e9 ? -1 : ans) << endl; 
}

