// exercise/ufs.cpp
// 2017.03.01


#define M 10001
#define N M-1

int father[N];


void Init() {
	for (int i = 1; i <= N; ++i) {
		father[i] = i;
	}
}


int Find(int x) {
	if (x == father[x]) {
		return x;
	} else {
		int f = Find(father[x]);
		father[x] = f;
		return f;
	}
}


void Union(int a, int b) {
	int fa = Find(a);
	int fb = Find(b);
	if (fa != fb) {
		father[fa] = fb;
	}
}

