#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 2e5; 
int n; ll k;  
pi id [MM];
ll candies [MM]; 
 
int fact [] = {1,2,6,24,120,720,5040,40320,362880,3628800}; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k; 
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		id[i] = {x,i};
	}
	sort (id,id+n);
	for (int i = 0; i < n; i++) candies[i] = k/n; 
	k %= n; 
	for (int i = 0; i < k; i++) {
		candies[id[i].second]++;
	}
	for (int i = 0; i < n; i++) {
		cout << candies[i] << endl; 
	}
}