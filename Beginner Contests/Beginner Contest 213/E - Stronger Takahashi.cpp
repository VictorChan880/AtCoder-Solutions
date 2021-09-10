#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, pair<int,int> >pi; 

#define mp make_pair 
#define pb push_back
#define f first
#define s second

const int MM = 505; 
const int mod = 1e9+7; 
int h,w; 
int dy [] = {0,1,0,-1,-1,-1,1,1};
int dx [] = {1,0,-1,0,-1,1,-1,1};
char grid[MM][MM]; 
int dis[MM][MM]; 
bool inbound (int y, int x) {
	if (y >= 0 && x >= 0 && y < h && x < w) return true;
	return false; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> h >> w; 
	for (int i =0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> grid[i][j];
		}
	} 
	memset(dis,0x3f3f3f3f,sizeof(dis)); 

	priority_queue<pi, vector<pi>, greater<pi> >q;
	dis[0][0] = 0; q.push(mp(0,mp(0,0))); 
	while (!q.empty()) {
		int y = q.top().s.f, x = q.top().s.s; 
		if (dis[y][x] < q.top().f) {
			q.pop(); 
			continue; 
		}
		q.pop(); 
		if (grid[y][x] == '.') {
			for (int i = 0; i < 4; i++) {
				int cury = y+dy[i], curx = x + dx[i];
				if (inbound(cury,curx)) {
					if (grid[cury][curx] == '#' && dis[cury][curx] > dis[y][x]+1) {
						dis[cury][curx] = dis[y][x]+1;
						q.push(mp(dis[cury][curx], mp(cury,curx))); 
					}
					else if (grid[cury][curx] == '.' && dis[cury][curx] > dis[y][x]){
						dis[cury][curx] = dis[y][x];
						q.push(mp(dis[cury][curx], mp(cury,curx))); 
					}
				}
			}
		} 
		else {
			for (int i =0 ; i < 8; i++) {
				int cury = y+dy[i], curx = x + dx[i];
				if (inbound(cury,curx) && dis[cury][curx] > dis[y][x] ) {
					grid[cury][curx] = '.'; 
					dis[cury][curx] = dis[y][x];
					q.push(mp(dis[cury][curx],mp(cury,curx))); 
				}
			}
		} 
	}
	cout << dis[h-1][w-1] << endl; 
}