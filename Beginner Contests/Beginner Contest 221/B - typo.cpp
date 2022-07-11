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
string a,b; int cntA[MM], cntB[MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> a >> b; 
	if (a.length() != b.length()){
		cout << "No" << endl; 
		return 0; 
	}
	for (int i = 0; i < a.length(); i++) {
		cntA[a[i]]++; 
	} 
	for (int i = 0; i < b.length(); i++) {
		cntB[b[i]]++; 
	} 
	for (int i = (int)'a'; i <= (int)('z'); i++) {
		if (cntA[i] != cntB[i]) {
			cout << "No" << endl; 
			return 0;  
		}
	} 
	int cnt = 0; 
	for (int i = 0; i < b.length(); i++) {
		if (a[i] != b[i]) cnt++;
	} 
	if (cnt > 2) cout << "No" << endl;
	else {
		for (int i = 0; i < b.length(); i++) {
			if (a[i] != b[i]) {
				if ((i > 0 && a[i-1] != b[i-1]) || (i < b.length()-1 && a[i+1] != b[i+1])) {
					cout << "Yes" << endl;
				}
				else cout << "No" << endl;
				break; 
			}
			else if (i == b.length()-1) cout << "Yes" << endl; 
		} 
	}
}

