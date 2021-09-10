#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair 
typedef pair<int, int> pi; 
const int MM = 1e6; 
const int mod = 1e9+7; 
int a,b;  
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> a >> b;
	if (a > 0 && b == 0) cout << "Gold" << endl;
	else if (a == 0 && b > 0 ) cout << "Silver" << endl;
	else cout << "Alloy" << endl; 
}

