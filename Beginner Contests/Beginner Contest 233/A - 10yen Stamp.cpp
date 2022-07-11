#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 1e6+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int x,y;
	cin >> x >> y;
	if (x >= y) {
		cout << 0 << nl;
	} 
	else {
		int a = y-x;
		if (a % 10 == 0) {
			cout << a/10 << nl;
		}
		else cout << a/10 + 1 << nl; 
	}

}
