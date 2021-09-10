#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 2e5; 
const int mod = 1e9+7; 

ll cnt = 0, x;  
priority_queue<ll, vector<ll>, greater<ll> > pq;
int q,p;  
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> q;
	for (int i = 0; i < q;i++) {
		cin >> p;
		if (p == 1) {
			cin >> x; 
			pq.push(x-cnt); 
		}
		else if (p == 2) {
			cin >> x;
			cnt += x; 
		}
		else {
			cout <<pq.top()+cnt << endl; 
			pq.pop();
		}
	}
}

