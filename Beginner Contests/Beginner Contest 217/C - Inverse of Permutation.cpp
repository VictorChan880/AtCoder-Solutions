#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 3e5; 
const int mod = 998244353 ;  


int n;  
int q[MM], p[MM];  
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i]; 
		q[p[i]] = i+1; 
	}
	for (int i = 1; i <= n; i++) cout << q[i] << " ";
	cout << endl; 
}
