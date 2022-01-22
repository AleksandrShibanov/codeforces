//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/282/A

#include <iostream>
#define for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    ll n;
    std::cin >> n;

    std::string str;
    ll x = 0;
    while (n--) {
        std::cin >> str;
        if (str.find('+') != std::string::npos) {
            ++x;
        } else if (str.find('-') != std::string::npos) {
            --x;
        }
    }

    std::cout << x << std::endl;
    return 0;
}
