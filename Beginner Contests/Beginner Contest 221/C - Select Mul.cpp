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
string n; ll ans = 0; 

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	sort(n.begin(), n.end());
       do {
	       for (int i = 0; i < (int)n.length()-1; i++) {
			vector <char> left, right; 
			if (n[i+1] == '0') continue; 
			for (int j = 0; j <= i; j++) {
				left.pb(n[j]);
			}
			for (int j = i+1; j < (int)n.length(); j++) {
				right.pb(n[j]);
			}
			sort(left.begin(), left.end(), greater<char>()); 
			sort(right.begin(), right.end(), greater<char>()); 
			string left_str = "", right_str = ""; 
			for (int j = 0; j <= i; j++) {
				left_str += left.at(j); 
			}
			for (int j = 0; j < (int)right.size(); j++) {
				right_str += right.at(j); 
			}
			//cerr << left_str << " " << right_str << endl; 
			ans = max( 1LL * stoi(left_str) * stoi(right_str), ans);
		}
    } while (next_permutation(n.begin(), n.end()));
	
	cout << ans << endl; 
}
