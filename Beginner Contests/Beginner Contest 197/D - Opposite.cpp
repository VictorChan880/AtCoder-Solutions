#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 30+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int ans = 2e9, n, a[MM]; 

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	double xa,ya,xb,yb; 
	cin >> n >> xa >> ya >> xb >> yb; 
	double mx = (xa+xb)/2, my = (ya+yb)/2; 
	double theta = 2*M_PI/n; 
	double x1 = xa - mx, y1 = ya - my; 
	double x2 = cos(theta)*x1 - sin(theta)*y1, y2 = sin(theta)*x1 + cos(theta)*y1;

	cout << setprecision(9) << x2 + (xa-x1) << " " << y2 + (ya-y1) << nl; 
}