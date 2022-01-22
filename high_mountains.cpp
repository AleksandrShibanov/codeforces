// https://codeforces.com/edu/course/3/lesson/10/4/practice/contest/324369/problem/H

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    size_t n;
    std::cin >> n;
    n += 1;
    long long vec[n];

    vec[0] = 0;
    for (size_t i = 1; i < n; ++i) {
        std::cin >> vec[i];
    }

    long long difference[n - 1];
    for (size_t i = 0; i < n - 1; ++i) {
        difference[i] = vec[i + 1] - vec[i];
    }

    size_t k;
    std::cin >> k;
    for (size_t i = 0; i < k; ++i) {
        size_t l;
        long long value;
        std::cin >> l >> value;
        difference[n - 1 - l] += value;
    }

    for (size_t i = 0; i < n - 1; ++i) {
        vec[i + 1] = vec[i] + difference[i];
    }

    for (size_t i = 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}
