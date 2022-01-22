//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/266/B

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {
    ll n;
    std::cin >> n;
    ll t;
    std::cin >> t;

    std::string str;
    std::cin >> str;



    while (t--) {
        my_for(i, str.size()) {
            if (i + 1 < str.size() && str[i] == 'B' && str[i + 1] == 'G') {
                std::swap(str[i], str[i + 1]);
                ++i;
            }
        }
    }


    std::cout << str;

    return 0;
}



