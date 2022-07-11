#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e5+1;   
const int mod = 1e9 + 7; 
ll a[MM], x, sum = 0; int n; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> a[i]; sum += a[i];
	}
	cin >> x; 
	ll ans = (x/sum) * n; 
	ll cnt = (x/sum) * sum;
	for (int i = 0; i < n; i++) {
		if (cnt <= x){
			cnt += a[i];
			ans++;
		}
		else break; 
	}
	cout << ans << endl; 
	
}

