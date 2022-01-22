// https://codeforces.com/edu/course/3/lesson/10/4/practice/contest/324369/problem/J

#include <iostream>
#include <algorithm>
#include <unordered_set>


int main() {
    size_t n;
    long long m, k;
    std::cin >> n >> m >> k;
    if (m >= k) {
        std::cout << (1000001 - k);
        return 0;
    }

    std::unordered_set<long long> set;
    long long buf;
    long long maxx = -1;
    for (size_t i = 0; i < n; ++i) {
        std::cin >> buf;
        set.insert(buf);
        if (buf > maxx) {
            maxx = buf;
        }
    }

    long long count = 0;
    long long res = 0;
    long long l = 1;
    for (long long i = 1; i < k + 1; ++i) {
        auto search = set.find(i);
        if (search != set.end()) {
            ++count;
        }
    }

    for (long long r  = k+1; r < std::min(1000000LL, maxx + k + 1); ++r) {
        if (count >= k - m) {
            ++res;
        }
        auto search = set.find(r);
        if (search != set.end()) {
            ++count;
        }
        search = set.find(l);
        if (search != set.end()) {
            --count;
        }
        ++l;
    }

    std::cout << res;


    return 0;
}