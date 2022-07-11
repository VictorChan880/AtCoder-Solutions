#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int > pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 4005;   
const int mod = 1e9 + 7; 
ll a,b; string A, B; ll k; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> k >> A >> B;
	for (int i = 0; i < A.length(); i++) {
		a += pow (k , (A.length()-i-1)) * (A[i] - '0'); 
	}
	for (int i = 0; i < B.length(); i++) {
		b +=  pow (k , (B.length()-i-1)) * (B[i] - '0'); 
	}
	cout << a * b << endl; 
}

