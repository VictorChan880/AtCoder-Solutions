#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 301;  
const int mod = 998244353 ; 
int t; ll n2, n3, n4; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		ll ans = 0; 
		cin >> n2 >> n3  >> n4;
		if (n3/2 < n4) {
			n4 -= n3/2;
			ans += n3/2;
			n3 = 0; 
			if (n2< n4/2) {
				n4 -= n2 * 2;
				ans += n2;
				n2 = 0; 
			}
			else {
				n2 -= n4/2;
				ans += n4/2;
				ans += n2/5; 
				n4 = 0;
				n2 /= 5; 
			}
		}
		else {
			n3 -= n4 * 2;
			ans += n4;
			n4 = 0;
			if (n3/2 < n2/2 ) {
				n2 -= n3; 
				ans += n3/2;
				n3 = 0; 
				ans += n2/5; 
				n2 /= 5; 
			}
			else {
				ans += n2/2;
				n2 = 0;  
			}
		}
		cout << ans << endl; 
		
	} 
}

