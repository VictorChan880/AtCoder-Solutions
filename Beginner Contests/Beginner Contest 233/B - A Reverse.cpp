#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

string str;
char a[MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int l, r;
	cin >> l >> r >> str;
	int idx = 0; 
	for (int i = l-1; i < r; i++) {
		a[idx] = str[i];
		idx++; 
	}
	
	reverse(a, a + (r-l)+1);
	
	for (int i = 0; i < l-1;i++) {
		cout << str[i];
	}
	for (int i = 0; i < r-l+1; i++) {
		cout << a[i];
	}
	for (int i = r; i < str.length(); i++) {
		cout << str[i]; 
	}
	cout << nl; 
}
