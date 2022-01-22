//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#define for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    std::string str1, str2;
    std::cin >> str1 >> str2;

    for(i, str1.size()) {
        if (std::tolower(str1[i]) < std::tolower(str2[i])) {
            std::cout << -1 << std::endl;
            return 0;
        }
        if (std::tolower(str1[i]) > std::tolower(str2[i])) {
            std::cout << 1 << std::endl;
            return 0;
        }
    }

    std::cout << 0 << std::endl;
    return 0;
}
