// pat_b_1079.cpp
// 2022.01.04

#include <iostream>
#include <algorithm>

std::string add(std::string isa, std::string isb) {
    int carry = 0;
    std::string ret;
    for (int i = isa.size() - 1; i >= 0; --i) {
        carry = (isa[i] - '0') + (isb[i] - '0') + carry;
        ret = std::to_string(carry % 10) + ret;
        carry /= 10;
    }
    if (carry) {
        ret = std::to_string(carry) + ret;
    }
    return ret;
}

int main()
{
    std::string integer;
    std::cin >> integer;
    if (integer == std::string(integer.rbegin(), integer.rend())) {
        std::cout << integer << " is a palindromic number." << std::endl;
        return 0;
    }

    int cnt = 0;
    std::string ts2;
    while (cnt < 10) {
        std::string ts1(integer.rbegin(), integer.rend());
        ts2 = add(integer, ts1);
        std::cout << integer << " + " << ts1 << " = " << ts2 << std::endl;
        std::string ts3(ts2.rbegin(), ts2.rend());
        if (ts2 == ts3) {
            std::cout << ts2 << " is a palindromic number." << std::endl;
            break;
        }
        integer = ts2;
        cnt++;
    }
    if (cnt == 10) {
        std::cout << "Not found in 10 iterations." << std::endl;
    }

    return 0;
}
/*
97152

97152 + 25179 = 122331
122331 + 133221 = 255552
255552 is a palindromic number.
 */
