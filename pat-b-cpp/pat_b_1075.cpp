// pat_b_1074.cpp
// 2021.12.21

#include <iostream>
#include <map>
#include <vector>

struct Node {
    Node(){};
    Node(std::string a, int e, std::string n): addr(a), ele(e), next(n) {}
    std::string addr;
    std::string next;
    int ele;
};

int main()
{
    int n, k;
    std::string begin;
    std::cin >> begin >> n >> k;

    int ele;
    std::string addr, next;
    std::map<std::string, Node> mnode;
    for (int i = 0; i < n; ++i) {
        std::cin >> addr >> ele >> next;
        mnode[addr] = Node(addr, ele, next);
    }

    std::vector<Node> vnodea, vnodeb, vnodec;
    addr = begin;
    while (addr != "-1") {
        if (mnode[addr].ele < 0) {
            vnodea.push_back(mnode[addr]);
        } else if (mnode[addr].ele <= k) {
            vnodeb.push_back(mnode[addr]);
        } else {
            vnodec.push_back(mnode[addr]);
        }
        addr = mnode[addr].next;
    }

    for (int i = 0; i < vnodea.size(); ++i) {
        std::cout << vnodea[i].addr << " " << vnodea[i].ele << " ";
        if (i != vnodea.size() - 1) {
            std::cout << vnodea[i+1].addr << std::endl;
        } else {
            if (vnodeb.size() > 0) {
                 std::cout << vnodeb[0].addr << std::endl;
            } else if (vnodec.size() > 0) {
                 std::cout << vnodec[0].addr << std::endl;
            } else {
                std::cout << "-1" << std::endl;
            }
        }
    }
    for (int i = 0; i < vnodeb.size(); ++i) {
        std::cout << vnodeb[i].addr << " " << vnodeb[i].ele << " ";
        if (i != vnodeb.size() - 1) {
            std::cout << vnodeb[i+1].addr << std::endl;
        } else {
            if (vnodec.size() > 0) {
                 std::cout << vnodec[0].addr << std::endl;
            } else {
                std::cout << "-1" << std::endl;
            }
        }
    }
    for (int i = 0; i < vnodec.size(); ++i) {
        if (i != vnodec.size() - 1) {
            std::cout << vnodec[i].addr << " " << vnodec[i].ele << " " << vnodec[i+1].addr << std::endl;
        } else {
            std::cout << vnodec[i].addr << " " << vnodec[i].ele << " -1" << std::endl;
        }
    }

    return 0;
}
/*
30527
06203
415

7201
 */
