// exercise/kruskal.cpp
// 2017.03.03

/*
#define MAXE 1000
#define MAXV 1000

struct Edge {
	int u, v;
	int cost;
} edge[MAXE];

int ufs[MAXV];


bool cmp(Edge ea, Edge eb) {
	return ea.cost < eb.cost;
}


int find_ufs(int x) {
	while (x != ufs[x]) {
		x = ufs[x];
	}
	return x;
}


int kruskal(int n, int m) {
	int ans = 0, nedge = 0;

	for (int i = 0; i <= n; i++) {
		ufs[i] = i;
	}

	std::sort(edge, edge + m, cmp);
	for (int i = 0; i < m; ++i) {
		int fu = find_ufs(edge[i].u);
		int fv = find_ufs(edge[i].v);
		if (fu != fv) {
			ufs[fu] = fv;
			ans += edge[i].cost;
			nedge++;
			if (nedge == n - 1) { break; }
		}
	}

	if (nedge != n - 1) {
		return -1;
	} else {
		return ans;
	}
}
*/
