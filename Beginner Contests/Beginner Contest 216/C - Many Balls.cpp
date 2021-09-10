#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7;  

ll n;
int main() {
	cin >> n;
	string ans = ""; 
	while (n > 0) {
		if (n%2 == 0) {
			ans = "B" + ans;
			n/= 2; 
		}
		else {
			ans = "A" + ans;
			n--; 
		}
	}
	cout << ans << endl; 
}