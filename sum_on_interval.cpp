// https://codeforces.com/edu/course/3/lesson/10/2/practice/contest/324367/problem/A

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    size_t n;
    std::cin >> n;
    std::vector<long long> vec(n, 0);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    std::vector<long long> prefix_sum(n + 1, 0);
    for (size_t i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + vec[i];
    }
    size_t k;
    std::cin >> k;
    for (size_t i = 0; i < k; ++i) {
        size_t l, r;
        std::cin >> l >> r;
        l -= 1;
        std::cout << prefix_sum[r] - prefix_sum[l] << "\n";
    }
    return 0;
}
