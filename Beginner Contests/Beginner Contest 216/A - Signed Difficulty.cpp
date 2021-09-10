#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod = 1e9+7;  
 
double x; 
int main() {
	cin >> x;
 
	int y = (x - floor(x)) * 10;
	x = floor(x); 
	if (y <= 2) {
		cout << (int)x << "-" << endl;
	} 
	else if (y <= 6) {
		cout << (int)x << endl;
	}
	else cout << x << "+" << endl; 
 
}