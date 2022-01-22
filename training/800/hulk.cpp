//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/705/A

#include <iostream>

#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;


int main() {

    ll n;
    std::cin >> n;
    ll buf;

    if (n == 1) {
        std::cout << "I hate it";
        return 0;
    }

    std::string str;

    while (n--) {
        if (n % 2 == 0) {
            str = std::string("I hate that ") + str;
        }
        if (n % 2 == 1) {
            str = std::string("I love that ") + str;
        }
    }

    for (int i = 0; i < 5; ++i) {
        str.pop_back();
    }
    std::cout << str + "it";


    return 0;
}

