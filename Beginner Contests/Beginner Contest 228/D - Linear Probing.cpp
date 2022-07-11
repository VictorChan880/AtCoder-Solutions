#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< int,int > pi; 
const int MM = 2e6+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
ll q,t, a[MM],nxt[MM], n = 1<<20; 
ll x;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);    
	cin >> q;
	fill(a,a+n,-1); 
	for (int i = 0; i < n; i++) nxt[i] = i; 
	for (int i = 0; i <  q; i++) {
		cin >> t >> x;
		if (t == 1){
			while (a[nxt[x%n]] != -1) {
				nxt[x%n] = nxt[nxt[x%n]];
			}
			a[nxt[x%n]] = x;
			ll _a = x%n, b = (nxt[x%n]+1)%n; 
			while (a[b%n] != -1) {
				b = nxt[nxt[b]]; 
			}
			nxt[_a] = nxt[nxt[_a]] = b; 
		}
		else cout << a[x%n] << nl; 
	}
}	