#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 3e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

string s; int k; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> s >> k;
	
	int cnt = 0, ans = 0, n = s.length();
	if (n == 1) {
		if (s[0] == 'X' || k > 0) {
			cout << 1 << nl; 
		}
		else cout << 0 << nl;
		return 0;  
	}
	if (k == 0) {
		for (int i = 0; i < n; i++) {
			if (s[i] == 'X') cnt++;
			else cnt = 0;
			ans = max(ans,cnt); 
		}
		cout << ans << nl;
		return 0;
	}
	if (s[0] == 'X') cnt++;
	if (n > 1 && s[1] == 'X') cnt++; 
	for (int l = 0, r = 1; l < n; l++) {
		while (r < n - 1&& r - l + 1 - cnt < k) {
			r++;
			if (r < n && s[r] == 'X') cnt++;
		}
		while (r < n-1 && s[r+1] == 'X') {
			r++; 
			cnt++; 
		}
		ans = max(ans, r - l+1);
		if (s[l] =='X') cnt--; 
	}
	cout << ans << nl; 
}