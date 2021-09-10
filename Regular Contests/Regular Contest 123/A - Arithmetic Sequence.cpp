#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 1e9; 
const int MOD = 1e9+7;
const ll INF =  1e18;
ll a1,a2,a3;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> a1 >> a2 >> a3;
	ll ans = 0; 
	while (a2-a1 != a3-a2) {
		ll x = a2-a1, y = a3-a2;
		if (y-x == 1) {a2++; a3++; ans+=2;}
		else if (x-y == 1) {a3++;  ans++; }
		else if ( a2 - a1 < a3-a2) {
			ans += (a1+a3)/2 - a2;
			a2 = (a1+a3)/2;
		}
		else if (a2 - a1 > a3-a2) {ans+= (a2-a1)-(a3-a2); a3 += (a2-a1)-(a3-a2);}
	}
	cout << ans <<endl; 
	
	
	
}  