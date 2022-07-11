#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 2e6+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int h,w; 
bool grid[101][101];
int vis [101][101]; 
int ans;
void dfs (int y, int x, int cnt) {
	ans = max(cnt,ans); 
	vis[y][x] = cnt; 
	if (grid[y+1][x] && vis[y+1][x] < cnt+1) dfs(y+1,x,cnt+1);
	if (grid[y][x+1] && vis[y][x+1] < cnt+1) dfs(y,x+1,cnt+1);
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> h >> w;
	for (int i= 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			char x; 
			cin >> x; 
			grid[i][j] = (x == '.');
		}
	}
	dfs(0,0,1); 
	cout << ans << nl; 
}
