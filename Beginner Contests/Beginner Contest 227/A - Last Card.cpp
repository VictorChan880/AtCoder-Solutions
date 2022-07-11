#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< long,long > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int n,k,a;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k >> a;
    cout << (a + (k-1) - 1)% n + 1 << nl; 
}
 