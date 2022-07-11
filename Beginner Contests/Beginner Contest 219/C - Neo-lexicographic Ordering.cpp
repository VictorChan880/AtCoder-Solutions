#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, pair<int,int> > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2e5+1;  
const int mod = 998244353 ; 
char a [MM]; string t, s[MM]; int n;  
struct cmp {
	bool operator()(string x, string y) { 
		for (int i = 0; i < (int)min(x.size(),y.size()); i++) {
			if (a[(int)x[i]] != a[(int)y[i]]) return a[(int)x[i]] < a[(int)y[i]];
		}
		return x.size() < y.size();  
	}
};
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	for (int i = 0; i < 26; i++) {
		char x; 
		cin >> x;
		a[(int)x] = i;
	}
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> s[i]; 
	}
	sort (s, s+n, cmp()); 
	for (int i = 0; i < n; i++) {
		cout << s[i] << endl; 
	}
}

