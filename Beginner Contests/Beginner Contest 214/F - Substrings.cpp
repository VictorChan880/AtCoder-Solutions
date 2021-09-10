#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, pair<int,int>> pi; 
#define mp make_pair
#define pb push_back 
#define f first
#define s second
const int MM = 1e6; 
const int mod = 1e9+7; 

int dp[MM]; 
string s; 
ll ans = 0; 
bool vis[(int)300]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> s;
	dp[0] = 1; 
	for (int i = 0; i < s.length(); i++) {
		for (int j = i-1; ;j--) {
			dp[i+2] = (dp[i+2] + dp[j+1])%mod;
			if (j == -1 || s[j] == s[i]) break;  
		}
	}
	for (int i = 2; i < s.length()+2; i++) {
		ans = (ans + dp[i])%mod;
	}
	cout << ans << endl; 

}