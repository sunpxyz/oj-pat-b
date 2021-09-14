// exercise/prim.cpp
// 2017.03.03

/*
#define MAXV 1000
#define INF 10000000

int n, G[MAXV][MAXV];
int d[MAXV];
bool vis[MAXV] = {false};


int prim() {
	int ans = 0;
	fill(d, d + MAXV, INF);
	d[0] = 0;
	for (int i = 0; i < n; ++i) {
		int u = -1, MIN = INF;
		for (int j = 0; j < n; ++j) {
			if (vis[j] == false && d[j] < MIN) {
				u = j;
				MIN = d[j];
			}
		}
		if (u == -1)
			return -1;
		vis[u] = true;
		ans += d[u];
		for (int v = 0; v < n; v++) {
			if (vis[v] == false && G[u][v] != INF && G[u][v] < d[v]) {
				d[v] = G[u][v];
			}
		}
	}

	return ans;
}
*/
