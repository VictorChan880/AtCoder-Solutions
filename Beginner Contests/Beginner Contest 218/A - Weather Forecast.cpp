#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 805;  
const int mod = 998244353 ;  

int n; string s; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> s; 
	cout << ((s[n-1] == 'x'? "No" : "Yes")) << endl; 
}
