#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 1e6; 
const int mod = 1e9+7; 

int n,s[MM],t[MM], ans[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i =0; i < n; i++) {
		cin >> s[i]; 
		s[i+n] = s[i];
		ans[i] = ans[i+n] = 1e9;  
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
		t[i+n] = t[i];  
	}

	for (int i = 1; i <2*n; i++) {
		ans[i] = min(ans[i-1]+s[i-1], t[i]);
	}
	for (int i = n; i <2*n; i++) {
		cout << ans[i] << endl; 
	}
}