#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 2*1e5;
int n, t; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	if (max(a,b) == a) {
		if (max (b,c) == c) cout << a + c<< endl;
		else cout << a + b << endl; 
	}
	else if (max (a,b) == b) {
		if (max (a,c) == a) cout << a + b << endl;
		else cout << b + c << endl;
		}
		else {
			if (max (a,b) == a) cout << c + a << endl;
			else cout << c + b << endl; 
		}
}