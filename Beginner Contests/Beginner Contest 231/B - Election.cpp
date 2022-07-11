#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 5e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int n; 
map<string,int> _map; 
string ans, str; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	int cnt; 
	for (int i = 0; i< n; i++) {
		cin >> str;
		_map[str]++;
		if(_map[str] > cnt) {
			cnt = _map[str];
			ans = str; 
		}
	}
	cout << ans << nl; 
}
