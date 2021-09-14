// pat_b_1063.cpp
// 2017.05.15

/*
#include <cstdio>
#include <cmath>
#include <vector>


int main() {
	int n;
	scanf("%d", &n);

	double r, v, s;
	std::vector<double> dvec;
	for (int i = 0; i < n; ++i) {
		scanf("%lf%lf", &r, &v);
		s = pow(r, 2) + pow(v, 2);
		dvec.push_back(pow(s, 0.5));
	}

	double ans = dvec[0];
	for (std::vector<double>::iterator idvec = dvec.begin();
		 idvec != dvec.end(); ++idvec) {
		if (*idvec > ans) {
			ans = *idvec;
		}
	}
	printf("%.2lf\n", ans);

	return 0;
}
*/
