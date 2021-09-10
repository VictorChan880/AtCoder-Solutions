#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 1e6; 
const int mod = 1e9+7; 

int n, a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	if (n <= 125) {
		cout << 4 << endl;
	}
	else if (n <= 211) {
		cout << 6 << endl;
	}
	else {
		cout << 8 << endl; 
	}
}