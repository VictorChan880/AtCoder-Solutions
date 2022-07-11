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
int n,x,a[MM];
bool knows[MM];  
set<int> _set; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);    
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = x; !knows[i]; i = a[i]) {
		_set.insert(i);
		knows[i] = true; 
	}
	cout << _set.size() << nl; 
}