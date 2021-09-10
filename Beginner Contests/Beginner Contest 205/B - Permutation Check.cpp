#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	unordered_set<int> set;
	for (int i = 0; i< n; i++) {
		int x;
		cin >> x;
		set.insert(x);
	}
	if (set.size() != n) cout<< "No" << endl;
	else cout << "Yes" << endl;
}