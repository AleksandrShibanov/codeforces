//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include <set>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;


    ll iteration = 1;

    while (true) {
        std::set<char> set;
        ll counter = 0;

        ll buf = n + iteration;

        while (buf > 0) {
            ll digit = buf % 10;
            buf /= 10;

            set.insert(digit);

            ++counter;
        }

        if (set.size() == counter) {
            break;
        }

        ++iteration;
    }

    std::cout << n + iteration;

    return 0;
}

