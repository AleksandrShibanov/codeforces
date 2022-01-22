// https://codeforces.com/edu/course/3/lesson/10/3/practice/contest/324368/problem/A

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::vector<long long>> vec(n, std::vector<long long> (m, 0));
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            std::cin >> vec[i][j];
        }
    }
    std::vector<std::vector<long long>> prefix_sum(n + 1, std::vector<long long> (m + 1, 0));
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            prefix_sum[i + 1][j + 1] = prefix_sum[i][j + 1] + prefix_sum[i + 1][j] - prefix_sum[i][j] + vec[i][j];
        }
    }
    size_t k;
    std::cin >> k;
    for (size_t i = 0; i < k; ++i) {
        size_t lx, ly, rx, ry;
        std::cin >> lx >> ly >> rx >> ry;
        lx -= 1;
        ly -= 1;
        std::cout << prefix_sum[rx][ry] - prefix_sum[lx][ry] - prefix_sum[rx][ly] + prefix_sum[lx][ly] << "\n";
    }
    return 0;
}
