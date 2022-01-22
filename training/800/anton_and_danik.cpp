//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#define def_for(i, n) for(int i = 0; i < n; ++i)
#define str_for for(int i = 0; i < str.size(); ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    ll a = 0;
    ll d = 0;
    str_for {
        if (str[i] == 'A') {
            ++a;
        } else {
            ++d;
        }
    };

    if (a > d) {
        std::cout << "Anton";
        return 0;
    }

    if (d > a) {
        std::cout << "Danik";
        return 0;
    }

    std::cout << "Friendship";

    return 0;
}

