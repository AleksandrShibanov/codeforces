//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/4/A

#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::cout << (n > 2 && (n % 2 == 0) ? "YES" : "NO");

    return 0;
}