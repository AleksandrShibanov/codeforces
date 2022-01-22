//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/71/A

#include <iostream>

void test_case() {
    std::string str;
    std::cin >> str;

    size_t str_size = str.size();
    if (str_size > 10) {
        std::cout << str[0] << str_size - 2 << str[str_size - 1] << std::endl;
    } else {
        std::cout << str << std::endl;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        test_case();
    }

    return 0;
}