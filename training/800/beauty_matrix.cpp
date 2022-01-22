//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/263/A

#include <iostream>
#define for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll buf;
    ll ind_x, ind_y;
    for(i, 5) {
        for(j, 5) {
            std::cin >> buf;
            if (buf == 1) {
                ind_x = j;
                ind_y = i;
            }
        }
    }

    std::cout << std::abs(2 - ind_x) + std::abs(2 - ind_y) << std::endl;




    return 0;
}

