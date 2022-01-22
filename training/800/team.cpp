//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/231/A

#include <iostream>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    long long ans = 0;
    while (t--) {
        int f, s, th;
        std::cin >> f >> s >> th;

        if ( f + s + th >= 2) {
            ++ans;
        }
    }

    std::cout << ans;

    return 0;
}