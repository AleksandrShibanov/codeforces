//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/281/A

#include <iostream>
#define for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {
    std::string str;
    std::cin >> str;
    str[0] = toupper(str[0]);
    std::cout << str;

    return 0;
}

