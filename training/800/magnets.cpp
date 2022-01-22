//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/344/A

#include <iostream>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll t;
    std::cin >> t;

    std::string prev = "99";
    ll counter = 0;


    while (t--) {
        std::string cur;
        std::cin >> cur;

        if (cur[0] == prev[1]) {
            ++counter;
        }

        prev = cur;
    }



    std::cout << counter + 1;

    return 0;
}

