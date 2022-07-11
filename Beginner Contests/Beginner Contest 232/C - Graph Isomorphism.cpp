#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 2e6+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int n,m, p[9], adj1[9][9], adj2[9][9]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj1[u][v] = true; 
		adj1[v][u] = true; 
	} 
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj2[u][v] = true;
		adj2[v][u] = true;  
	} 
	for (int i= 1; i <= n; i++) p[i] = i;
	do {
		bool flag = true; 
		//for (int i = 1; i <= n; i++) cerr << p[i] << " ";
		//cerr << nl; 
		for (int j = 1; j <= n; j++) {
			for (int k = j+1; k <= n; k++) {
				if (adj1[j][k] != adj2[p[j]][p[k]]) {
					flag = false; 
					//cerr << j << " " << k  << nl; 
				}
			}
		}
		if (flag) {
			cout << "Yes" << nl;
			return 0; 
		}
	}while (next_permutation(p+1,p+n+1));
	cout << "No" << nl; 
}
