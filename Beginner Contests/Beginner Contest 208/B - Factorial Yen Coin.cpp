#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 750000; 
int p; 
int fact [] = {1,2,6,24,120,720,5040,40320,362880,3628800}; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> p;
	int i = 9, ans = 0; 
	while (p > 0) {
		while (p >= fact[i]) {p-=fact[i]; ans++;}
		i--; 
	}
	cout << ans << endl; 
}