// pat_b_1083.cpp
// 2022.01.05

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    int tmp;
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        vec[i] = std::abs(tmp - i - 1);
    }
    std::sort(vec.rbegin(), vec.rend());

    int i, cnt = 1;
    for (i = 1; i < vec.size(); ++i) {
        if (vec[i] == vec[i-1]) {
            cnt++;
        } else {
            if (cnt > 1) {
                std::cout << vec[i - 1] << " " << cnt << std::endl;
            }
            cnt = 1;
        }
    }
    if (cnt > 1) {
        std::cout << vec[i - 1] << " " << cnt << std::endl;
    }

    return 0;
}
/*
8
3 5 8 6 2 1 4 7

5 2
3 3
2 2
 */
