//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/59/A

#include <iostream>
#define my_for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    std::string str;
    std::cin >> str;

    ll lower_letters = 0;
    ll upper_letters = 0;
    my_for(i, str.size()) {
        if (toupper(str[i]) == str[i]) {
            ++upper_letters;
        } else {
            ++lower_letters;
        }
    }

    if (lower_letters >= upper_letters) {
        my_for(i, str.size()) {
            str[i] = tolower(str[i]);
        }
    } else {
        my_for(i, str.size()) {
            str[i] = toupper(str[i]);
        }
    }

    std::cout << str;

    return 0;
}


