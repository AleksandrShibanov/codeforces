//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/1030/A


#include <iostream>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    def_for(i, n) {
        ll buf;
        std::cin >> buf;
        if (buf == 1) {
            std::cout << "HARD";
            return 0;
        }
    }

    std::cout << "EASY";
    return 0;
}

