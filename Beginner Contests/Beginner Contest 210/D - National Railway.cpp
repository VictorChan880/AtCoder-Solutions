#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 1005; 
const int MOD = 1e9+7;
const ll INF =  1e18;
ll h, w, c;
ll dp[MM][MM], a[MM][MM]; 
ll ans = INF; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> h  >> w >> c;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> a[i][j]; 
		}
	}
	for (int i = 0; i <= h; i++) dp[i][0] = INF;  
	for (int i = 0; i <= w; i++) dp[0][i] = INF;  

	dp[1][1] = a[1][1]; 
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			dp[i][j] = a[i][j]; 
			dp[i][j] = min(dp[i][j], min(dp[i-1][j]+c, dp[i][j-1] + c));
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (i == j && j == 1) continue; 
			ans = min(dp[i][j-1] + c + a[i][j],ans);
			ans = min(ans,dp[i-1][j] + c + a[i][j]); 
		}
	}
	for (int i = 0; i < ceil((float)h/2); i++) {
		for (int j = 1; j <= w; j++) {
			swap(a[i+1][j],a[h-i][j]); 
		}
	}
	for (int i = 0; i <= h; i++) dp[i][0] = INF;  
	for (int i = 0; i <= w; i++) dp[0][i] = INF;  
	dp[1][1] = a[1][1]; 
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			dp[i][j] = a[i][j]; 
			dp[i][j] = min(dp[i][j], min(dp[i-1][j]+c, dp[i][j-1] + c));
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (i == j && j == 1) continue; 
			ans = min(dp[i][j-1] + c + a[i][j],ans);
			ans = min(ans,dp[i-1][j] + c + a[i][j]); 
		}
	}
	cout << ans << endl; 
	
	
}  