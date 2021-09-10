#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int mod = 1e9+7; 
const int MM = 2e5; 
int n;
int c [MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; 
	ll cnt = 1; 
	for (int i = 0; i < n; i++) cin >> c[i]; 
	sort(c,c+n); 
	for (int i = 0; i < n; i++) {
		c[i]-=i; 
		if (c[i] == 0) {
			cout << 0 << endl; 
			return 0; 
		}
		cnt = (cnt*c[i])%mod;  

	} 
	cout << cnt%mod << endl; 
}	