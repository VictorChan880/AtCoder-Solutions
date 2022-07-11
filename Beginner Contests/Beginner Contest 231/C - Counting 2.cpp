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

int n, a[MM], q;   
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> q;
	for (int i = 0; i< n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < q; i++) {
		int x; 
		cin >> x; 
		int ps = lower_bound(a,a+n, x) - a; 
		cout << n - ps << nl; 
	}
}
