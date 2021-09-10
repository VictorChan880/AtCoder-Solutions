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
int X[MM], Y[MM], h,w;
map<int,int> y_map, x_map; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> h >> w >> n;  
	for (int i =0; i < n; i++) {
		int y, x;
		cin >> y >> x;
		X[i] = x;
		Y[i] = y; 
		a[i] = {y,x}; 
 	}
 	
 	sort(X,X+n);
 	sort(Y,Y+n);
	for (int i =0; i < n; i++) {
		if (y_map.count(Y[i]) == 0) y_map[Y[i]] = y_map.size()+1;
		if (x_map.count(X[i]) == 0) x_map[X[i]] = x_map.size()+1;
 	}
	for (int i =0; i < n; i++) {
		cout << y_map[a[i].f] << " " << x_map[a[i].s] << endl; 
 
 	}
}