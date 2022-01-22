//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/546/A


#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll k, n, w;
    std::cin >> k >> n >> w;

    std::cout << std::max(ll(double(k + w * k) / 2 * w) - n, 0LL) << std::endl;

    return 0;
}

