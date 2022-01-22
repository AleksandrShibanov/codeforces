//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/791/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll a, b;
    std::cin >> a >> b;

    ll ans = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        ++ans;
    }

    std::cout << ans;

    return 0;
}

