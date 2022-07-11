#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< long,long > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int n, s[MM], ans;
set<int> _set; 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int a = 1; a <= 1000; a++) {
    	for (int b = 1; 4*a*b+3*a+3*b <= 1000; b++) {
    		if (4*a*b+3*a+3*b == 888) cerr << a << " " << b << nl; 
    		_set.insert(4*a*b+3*a+3*b);
    	}
    } 
    for (int i =0; i < n; i++) {
    	cin >> s[i];
    	if (_set.find(s[i]) == _set.end()) ans++;
    }
    cout << ans << nl; 

    
    
}
 