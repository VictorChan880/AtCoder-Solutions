#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod1 = 1e9+7;  
const int mod2 = 1e9+11;  
string s; 
int k; 
vector<string> str; 
int main() {
    cin >> s >> k; 
        sort(s.begin(), s.end());
    do {
       str.pb(s); 
    } while (next_permutation(s.begin(), s.end()));
    str.pb(s); 
    sort(str.begin(), str.end());
    cout << str[k] << endl; 
}