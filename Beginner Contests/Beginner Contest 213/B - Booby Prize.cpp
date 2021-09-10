#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7; 
 
pi a[MM]; int n;    
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >>n ;
	for (int i =0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = {x,i}; 
	}
	sort (a,a+n);
	cout << a[n-2].s+1 << endl; 
	
}