//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/977/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll n, k;
    std::cin >> n >> k;

    while (k--) {
        if (n % 10) {
            n -= 1;
        } else {
            n /= 10;
        }
    }

    std::cout << n;

    return 0;
}

