#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 3001; 
const int mod = 998244353;  

double a, b; 
int main() {
	cin >> a >> b;
	cout << setprecision(10) << (a-b)/3 + b << endl;	
}