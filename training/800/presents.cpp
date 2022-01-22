//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/136/A

#include <iostream>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    ll a[n];
    ll b[n];

    def_for(i, n) {
        std::cin >> a[i];
    }

    def_for(i, n) {
        b[a[i] - 1] = i + 1;
    }

    def_for(i, n) {
        std::cout << b[i] << " ";
    }



    return 0;
}

