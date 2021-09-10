#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 1e6 ; 
const int mod = 1e9+7; 
ll n;
string s;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> s; 
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			cout << ((i%2 == 0) ? "Takahashi" : "Aoki") << endl;
			break;
		}

	}
}