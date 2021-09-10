#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 2e5; 

int n,x;  
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> x; 
	int sum = 0; 
	for (int i = 0; i < n; i++) {
		int a;
		cin >>a ;
		sum += a;
	} 
	sum -= n/2; 
	cout << ((x >= sum) ? "Yes" : "No") << endl; 
}	