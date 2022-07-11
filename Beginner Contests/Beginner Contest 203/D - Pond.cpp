#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 #define rep(i, n) for(int i = 0; i < n; ++i)

const int MM = 805;  
const int mod = 998244353 ;  

int a[MM][MM], psa[MM][MM], n, k;
bool has_mid (int x, int cnt) {
	memset(psa,0,sizeof(psa));  
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			psa[i][j] = psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1] + (a[i-1][j-1] <= x); 
		}
	}
	for (int i = k; i <= n; i++) {
		for (int j = k; j <= n; j++) {
			if (psa[i][j] - psa[i-k][j] - psa[i][j-k] + psa[i-k][j-k] >= cnt) {
				return true;
			}
		}	
	}
	return false; 
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;
	vector<int> vec; 
	rep (i, n) {
		rep (j, n) {
			cin >>a[i][j]; 
			vec.pb(a[i][j]); 
		}
	}
	sort(vec.begin(), vec.end()); 
	int l = 0, r =  vec.size()-1, cnt = (k*k-1) /2 + 1; 
	while (l <= r) {
		int mid = (l+r)/2;
		if (has_mid(vec.at(mid), cnt)) r = mid-1;
		else l = mid+1;
	}
	cout << vec.at(l) << endl; 
}
