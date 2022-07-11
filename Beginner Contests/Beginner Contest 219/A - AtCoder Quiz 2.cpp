#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, pair<int,int> > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 2e6+1;  
const int mod = 998244353 ; 
int x; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> x;
	if (x < 0) {
		cout << - x << endl; 
	}
	else if ( x < 40) {
		cout << 40 - x << endl;
	}
	else if ( x < 70) {
		cout << 70 - x << endl; 
	}
	else if (x < 90) {
		cout << 90 - x << endl; 
	}
	else cout << "expert" << endl; 
}


