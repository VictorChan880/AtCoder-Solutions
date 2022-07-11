#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< long,long > pi; 
const int MM = 1e6+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int s,t,x; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);    
	cin >> s >> t >> x;
	if (t == 0) t = 24; 
	if (t < s) {
		t += 24; 
		if (x < s) x += 24; 
	}
	if (x >= s && x < t) {
		cout << "Yes" << nl;
	}
	else cout << "No" << nl; 
}