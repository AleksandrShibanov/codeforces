//
// Created by aleksandr on 14.07.2021.
//

// https://codeforces.com/problemset/problem/339/A?locale=en

#include <iostream>
#include <vector>
#define for(i, n) for(int i = 0; i < n; ++i)

using ll = long long;

int main() {

    std::string str;
    std::cin >> str;

    std::vector<ll> vec(3);

    std::string ans;

    for(i, str.size()) {
        if (str[i] == '+') {
            continue;
        }

        ++vec[str[i] - '0' - 1];
    }

    for(i, 3) {
        while (vec[i] > 0) {
            ans += std::to_string(i + 1);
            ans += "+";
            --vec[i];
        }
    }

    ans.pop_back();
    std::cout << ans << std::endl;





    return 0;
}

