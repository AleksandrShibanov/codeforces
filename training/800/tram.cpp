//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/116/A


#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll t;
    std::cin >> t;

    ll a, b;
    ll cur_cap = 0;
    ll max_cap = 1e9 + 5;
    max_cap *= -1;

    while (t--) {
        std::cin >> a >> b;
        cur_cap -= a;
        cur_cap += b;
        max_cap = std::max(max_cap, cur_cap);
    }

    std::cout << std::max(max_cap, 0LL) << std::endl;

    return 0;
}

