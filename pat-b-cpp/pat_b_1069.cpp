// pat_b_1069.cpp
// 2021.11.29

#include <iostream>
#include <vector>
#include <map>

int main() {
	int m, n, s;
	std::cin >> m >> n >> s;

	std::vector<std::string> vns(m+1);
	for (int i = 1; i <= m; i++) {
		std::cin >> vns[i];
	}

	std::map<std::string, int> msi;
	int idx = s, cnt = 0;
	while (idx <= m) {
		if (msi[vns[idx]] == 0) {
            cnt++;
            msi[vns[idx]]++;
			std::cout << vns[idx] << std::endl;
		} else {
            for (idx++; idx <= m; ++idx) {
                if (msi[vns[idx]] == 0) {
                    cnt++;
                    msi[vns[idx]]++;
                    std::cout << vns[idx] << std::endl;
                    break;
                }
            }
        }
        idx += n;
	}

    if (n >= m || s > m || cnt == 0) {
		std::cout << "Keep going..." << std::endl;
	}

	return 0;
}

/*
9 3 2
Imgonnawin!
PickMe
PickMe
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain


PickMe
Imgonnawin!
TryAgainAgain

*/
