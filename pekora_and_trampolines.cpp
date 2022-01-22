// https://codeforces.com/edu/course/3/lesson/10/4/practice/contest/324369/problem/D

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    long long t;
    std::cin >> t;
    while (t > 0) {
        long long n;
        std::cin >> n;
        long long vec[n];
        for (long long i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }
        long long b[n];
        for (long long i = 0; i < n; ++i) {
            b[i] = 0;
        }
        long long ans = 0;
        for (long long i = 0; i < n; ++i) {
            long long value = vec[i] - b[i] - 1;
            if (value < 0) {
                if (i + 1 < n) {
                    b[i + 1] -= value;
                }
            } else {
                ans += value;
            }
            for (long long j = i + 2; j < std::min(n, vec[i] + i + 1); ++j) {
                ++b[j];
            }
        }
        std::cout << ans << "\n";
        --t;
    }
    return 0;
}
