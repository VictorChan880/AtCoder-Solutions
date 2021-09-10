#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<double, double> pi; 
const int MM = 2001;
int n; pi a [MM]; 
bool inBet (pi& a, pi& b) {
	return ((a.first <= b.second && a.first >= b.first) || (a.second <= b.second && a.second>= b.first)
	        || (b.second <= a.second && b.second >= a.first) || (b.first<= a.second && b.first >= a.first));
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n;i++) {
		double t, l, r;
		cin >> t >> l >> r;
		if (t == 1) a[i] = {l,r};
		else if (t == 2) a[i] = {l,r-0.1};
		else if (t == 3) a[i] = {l+0.1,r};
		else a[i] = {l+0.1,r-0.1}; 
	}
	ll cnt = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (inBet(a[i],a[j])) {
				cnt++;
			}
		}
	}
	cout << cnt << endl; 
}