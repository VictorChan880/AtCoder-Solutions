#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair 
typedef pair<int, int> pi; 
const int MM = 10; 
const int mod = 1e9+7; 
string x; 
bool flag = false; 
int a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> x; 
	if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) flag = true; 
	else if (x[1]-'0' == (x[0]+1-'0')%10 && x[2]-'0' == (x[1]+1-'0')%10 && x[3]-'0' == (x[2]+1-'0')%10) flag = true;
	cout << ((flag)? "Weak" : "Strong") << endl; 
	}

