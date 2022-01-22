// https://codeforces.com/edu/course/3/lesson/10/4/practice/contest/324369/problem/A

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    size_t n;
    std::cin >> n;
    n += 1;
    std::vector<long long> vec(n, 0);
    for (size_t i = 0; i < n - 1; ++i) {
        std::cin >> vec[i + 1];
    }
    std::vector<long long> difference(n - 1, 0);
    for (size_t i = 0; i < n - 1; ++i) {
        difference[i] = vec[i + 1] - vec[i];
    }
    size_t k;
    std::cin >> k;
    for (size_t i = 0; i < k; ++i) {
        size_t l, r;
        int value;
        std::cin >> l >> r >> value;
        l -= 1;
        difference[l] += value;
        difference[r] -= value;
    }
    for (size_t i = 0; i < n - 1; ++i) {
        vec[i + 1] = vec[i] + difference[i];
    }
    for (size_t i = 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}
