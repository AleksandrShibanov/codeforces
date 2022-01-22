//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/677/A

#include <iostream>
#include <set>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    ll h;
    std::cin >> h;

    ll buf;
    ll counter = 0;
    def_for(i, n) {
        std::cin >> buf;
        if (buf > h) {
            counter += 2;
        } else {
            ++counter;
        }
    }

    std::cout << counter;




    return 0;
}

