// pat_b_1067.cpp
// 2021.11.18

#include <iostream>
#include <vector>

int main() {
	int n, cnt = 0;
	std::string pass;
	std::cin >> pass >> n;

    getchar();
	std::string tstr;
    std::vector<std::string> vstr;
	while (true) {
        getline(std::cin, tstr);
		if (tstr != "#") {
			vstr.push_back(tstr);
		} else {
            break;
        }
	}

    bool success = false;
	while (cnt < vstr.size() && cnt < n) {
		if (vstr[cnt] == pass) {
			std::cout << "Welcome in" << std::endl;
            success = true;
			break;
		} else {
			std::cout << "Wrong password: " << vstr[cnt] << std::endl;
		}
        cnt++;
	}
	if (cnt == n && !success) {
		std::cout << "Account locked" << std::endl;
	}

	return 0;
}
/*
Correct%pw 3
correct%pw
Correct@PW
whatisthepassword!
Correct%pw
#

 003 189 254 000 000
 000 233 151 099 000
 088 000 000 000 255
 */
