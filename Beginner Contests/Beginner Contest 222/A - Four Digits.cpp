#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
const int MM = 3e5+2;   
const int mod = 998244353; 

string s; 


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> s;
	if (s.size() != 4) {
		for (int i = 0;i + s.size() < 4; i++) {
			cout << 0;
		}
	}
	cout << s << endl; 
}

