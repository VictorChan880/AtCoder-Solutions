#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 401;  
const int mod = 998244353 ;  

int n,m;  
string str; 
pi top_left (int a[MM][MM]) {
	for (int i =0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j]) return mp(i,j); 
		}
	}
	return mp(0,0);
}
void rot90 (int s[MM][MM], int S[MM][MM]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			S[j][n-i-1] = s[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s[i][j] = S[i][j];
		}
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	int s[MM][MM] = {{0}}, S[MM][MM] = {{0}}, t[MM][MM] = {{0}};
	int cntS = 0, cntT= 0; 
	for (int i = 0; i < n; i++) {
		cin >> str; 
		for (int j = 0; j < n; j++) {
			s[i][j] = (str[j]=='#');
			cntS += s[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> str; 
		for (int j = 0; j < n; j++) {
		 	t[i][j] = (str[j]=='#');
		 	cntT += t[i][j];
		}
	}
	if (cntT != cntS) {
		cout << "No" <<endl;
		return 0; 
	}
	for (int i = 0; i < 4; i++) {
		rot90(s,S); 
		pi s_off = top_left(s);
		pi t_off = top_left(t);
		pi offset = mp(t_off.f-s_off.f, t_off.s-s_off.s); 
		bool found = true; 
		for (int j =0 ; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (j+offset.f >= 0 && j+offset.f < n && k+offset.s >= 0 && k+offset.s < n) {
						if (s[j][k] != t[j+offset.f][k+offset.s]) {
						found = false; 
						break; 
					}
				}
				else if (s[j][k]) {
					found = false; 
				}
				
			}
		}
		if (found)  {
			cout << "Yes" << endl; 
			return 0; 
		}
	}
	cout << "No" << endl; 
}
