// https://codeforces.com/edu/course/3/lesson/10/1/practice/contest/324365/problem/A

#include <iostream>
#include <vector>

int main() {
    size_t n;
    std::cin >> n;
    std::vector<long long> vec(n, 0);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    std::vector<long long> prefix_sum(n+1, 0);
    for (size_t i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + vec[i];
    }
    for (size_t i = 0; i < n + 1; ++i) {
        std::cout << prefix_sum[i] << " ";
    }
    return 0;
}
