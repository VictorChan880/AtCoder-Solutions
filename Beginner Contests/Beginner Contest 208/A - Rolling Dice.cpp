#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 750000; 
int a, b; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> a >> b;
	if (6 * a >= b && b >= a) cout << "Yes" << endl;
	else cout << "No" << endl; 
}