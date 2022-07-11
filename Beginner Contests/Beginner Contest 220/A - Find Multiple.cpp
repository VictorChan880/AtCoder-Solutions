#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 4005;   
const int mod = 1e9 + 7; 
ll a,b,c;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> a >> b >> c;
	for (int i = 1; i <= 1000; i++) {
		if (c * i > b) break;
		else if (c * i < a) continue;
		else {cout << c * i << endl; return 0;}
	}
	cout << -1 << endl; 
}

