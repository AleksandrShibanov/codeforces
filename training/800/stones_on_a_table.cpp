//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/266/A


#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;

    ll cur = str[0];
    ll ans = 0;
    for(int i = 1; i < str.size(); ++i) {
        if (cur == str[i]) {
            ++ans;
        } else {
            cur = str[i];
        }
    }

    std::cout << ans;

    return 0;
}

