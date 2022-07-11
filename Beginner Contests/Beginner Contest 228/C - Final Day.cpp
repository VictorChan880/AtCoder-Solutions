#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< int,int > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int n,k,a,b,c, ans[MM]; 
vector<pi>p;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);    
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		p.pb({a+b+c,i}); 
	}
	sort(p.begin(),p.end()); 
	for (int i = 0; i < n; i++) {
		int rank = n - (upper_bound(p.begin(),p.end(),mp(p[i].f+300,(int)1e9)) - p.begin())+1;
		ans[p[i].s] = rank; 
	}
	for (int i = 0; i < n; i++) {
		cout << (ans[i] <= k ?  "Yes" : "No") << nl; 
	}
}	