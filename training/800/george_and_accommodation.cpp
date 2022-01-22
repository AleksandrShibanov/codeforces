//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/467/A

#include <iostream>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll t;
    std::cin >> t;

    ll counter = 0;

    while (t--) {
        ll a, b;
        std::cin >> a >> b;

        if (b - a >= 2) {
            ++counter;
        }
    }

    std::cout << counter;




    return 0;
}

