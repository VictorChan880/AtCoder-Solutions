#include <bits/stdc++.h>
using namespace std;
void compare (int a , int b) {
	if (a == b) cout << "=" << endl;
	else if (a < b) cout << "<" << endl;
	else cout << ">" << endl; 
}
int main(){
	int a, b,c;
	cin >> a >> b >> c;
	if (c % 2 == 0) {
		a = abs(a);
		b = abs(b);
		compare(a,b);
	}
	else if (a < 0 && b >= 0) cout << "<" << endl;
	else if (a >= 0 && b < 0) cout << ">" << endl;
	else if (a>=0 && b>=0) compare (a,b);
	else {
		if (a < b) cout << "<" << endl;
		else if (a == b) cout << "=" << endl;
		else cout << ">" << endl;
	}
 
}