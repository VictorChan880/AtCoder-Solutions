#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 2*1e5;
int n, t; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b-d*c >= 0){cout << -1 << endl; return 0 ;}
	cout <<ceil((double)-a/(b-d*c)) << endl;

}