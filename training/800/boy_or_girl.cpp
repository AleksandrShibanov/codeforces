//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    bool alp[26];
    my_for(i, 26) {
        alp[i] = false;
    }

    std::string str;
    std::cin >> str;

    ll counter = 0;

    my_for(i, str.size()) {
        if (!alp[str[i] - 'a']) {
            alp[str[i] - 'a'] = true;
            ++counter;
        }
    }

    std::cout << ((counter % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");



    return 0;
}

