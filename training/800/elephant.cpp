//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/617/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    std::cout << n / 5 + (n % 5 != 0) << std::endl;

    return 0;
}

