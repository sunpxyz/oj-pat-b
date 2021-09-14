// exercise/floyd.cpp
// 2017.03.03


#define MAXV 200
#define INF 10000000

int n, m;
int dis[MAXV][MAXV];


void Floyd() {
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; i++) {
				if (dis[i][k] != INF && dis[k][j] != INF &&
					dis[i][k] + dis[k][j] < dis[i][j]) {
					dis[i][j] = dis[i][k] + dis[k][j];
				}
			}
		}
	}
}


