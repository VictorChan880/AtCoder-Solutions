#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
	const int MM = 2019+5;  
const int mod = 2019 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
string s; 


int cnt [MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> s;
	ll pot = 1;
	ll total = 0,ans = 0;   
	cnt[0]++; 
	for (int i = s.length()-1; i >= 0; i--) {
		total = ((ll)(s[i]-'0') * pot + total)%mod;
		ans += cnt[total]; 
		cnt[total]++; 
		pot = (10*pot)%mod; 
	}
	cout << ans << nl; 
}