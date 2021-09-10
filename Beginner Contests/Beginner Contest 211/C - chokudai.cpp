#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2e5+1; 
const int mod = 1e9+7;  

int n, m;
int dp[MM][9];
string str = "chokudai", s; 
int main() {
	cin >> s;
	for (int i = 0; i <= s.length(); i++) dp[i][0] = 1; 
	for (int i = 1;i <= (int)s.length(); i++) {
		for (int j = 1; j <= 8; j++) {
			if (s[i-1] == str[j-1]) {
				dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod; 
			}
			else dp[i][j] = dp[i-1][j]; 
		}
	}
	cout << dp[s.length()][8] << endl; 
}