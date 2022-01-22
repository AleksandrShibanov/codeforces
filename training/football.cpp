//
// Created by aleksandr on 15.07.2021.
//

// https://codeforces.com/problemset/problem/96/A?locale=en

#include <iostream>


using ll = long long;

int main() {

    std::string str;
    std::cin >> str;

    ll counter = 1;
    for(int i = 0; i < str.size(); ++i) {
        if (i != str.size() - 1 && str[i] == str[i + 1]) {
            ++counter;
        } else {
            counter = 1;
        }
        if (counter == 7) {
            std::cout << "YES";
            return 0;
        }
    };

    std::cout << "NO";
    return 0;
}

