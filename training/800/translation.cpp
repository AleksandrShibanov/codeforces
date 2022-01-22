//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/41/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;

    if (str1.size() != str2.size()) {
        std::cout << "NO";
        return 0;
    }

    my_for(i, str1.size()) {
        if (str1[i] != str2[str1.size() - i - 1]) {
            std::cout << "NO";
            return 0;
        }
    }

    std::cout << "YES";

    return 0;
}



