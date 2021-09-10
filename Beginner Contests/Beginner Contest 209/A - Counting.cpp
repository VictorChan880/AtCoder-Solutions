#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 2e5; 

int a,b; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> a >> b; 
	if (b<a) cout << 0 << endl; 
	else cout << b-a+1 <<endl; 
}	