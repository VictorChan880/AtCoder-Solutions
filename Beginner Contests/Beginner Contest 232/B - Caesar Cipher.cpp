#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 2e6+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
string s,t; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> s >> t;
	int pre = 0; 
	for (int i = 0; i < s.length(); i++) {
		int x = t[i] - s[i]; 
		if (x < 0) {
			x = 'z' - s[i] + t[i] - 'a' + 1; 
		}                                    
		if (i > 0 && x != pre) {
			cout << "No" << nl;
			return 0; 
		} 
		pre = x; 
		cerr << x << nl; 
	}
	cout << "Yes" << nl; 
}
