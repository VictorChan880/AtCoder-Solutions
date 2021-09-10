#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 1e6; 
const int mod = 1e9+7; 

int s,t;  
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> s >> t;
	int ans = 0; 
	for (int i =0; i <= s; i++) {
		for (int j = 0; j <= s; j++) {
			for (int k = 0; k <= s; k++) {
				if (i + j + k <= s && i*j*k <= t) {
					ans++; 
				}
			}
		}
	}
	cout << ans << endl; 
}