//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/160/A?locale=en

#include <bits/stdc++.h>


using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    ll a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a, a + n, std::greater<ll>());

    ll b[n + 1];
    b[0] = 0;
    ll cur_sum = 0;
    for (int i = 0; i < n; ++i) {
        cur_sum += a[i];
        b[i + 1] = cur_sum;
    }

    size_t i = 1;
    while (b[i] <= b[n] - b[i]) {
        ++i;
    }

    std::cout << i;

    return 0;
}

