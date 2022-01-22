//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#define for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll n, k;
    std::cin >> n >> k;
    --k;

    ll a[n];
    for(i, n) {
        std::cin >> a[i];
    }

    ll cur = a[k];
    ll cur_ind = k;

    if (cur == 0) {
        while (cur_ind >= 0 && a[cur_ind] == 0) {
            cur_ind--;
        }
    } else {
        while (cur_ind < n - 1 && cur == a[cur_ind + 1]) {
            ++cur_ind;
        }
    }

    std::cout << cur_ind + 1 << std::endl;




    return 0;
}
