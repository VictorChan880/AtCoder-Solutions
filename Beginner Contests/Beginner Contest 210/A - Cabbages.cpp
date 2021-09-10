#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 1e6 ; 
const int mod = 1e9+7; 
ll n,a,x,y;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> a >> x >> y;
	if (n >= a) cout << a*x + (n-a)*y << endl; 
	else cout << n*x << endl; 

}