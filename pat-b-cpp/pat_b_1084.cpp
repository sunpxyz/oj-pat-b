// pat_b_1084.cpp
// 2022.01.05

#include <iostream>

int main()
{
    int d, n;
    std::cin >> d >> n;

    std::string str = std::to_string(d);
    for (int i = 1; i < n; ++i) {
        int j, cnt = 1;
        std::string tmp;
        for (j = 1; j < str.size(); ++j) {
            if (str[j] == str[j-1]) {
                cnt++;
            } else {
                tmp += str[j-1] + std::to_string(cnt);
                cnt = 1;
            }
        }
        str = tmp + str[j-1] + std::to_string(cnt);
    }
    std::cout << str << std::endl;

    return 0;
}
/*
1 8

1123123111
 */
