//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/110/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {
    ll n;
    std::cin >> n;

    ll counter = 0;
    while (n > 0) {
        ll digit = n % 10;
        n /= 10;
        if (digit == 4 || digit == 7) {
            ++counter;
        }
    }

    if (counter == 4 || counter == 7) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}



