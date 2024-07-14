#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#include <algorithm>
#include <iostream>
#include <vector>

#include "../lib/DataStructure/SegmentTree/segment_tree.hpp"

int main() {
    int n;
    int q;
    std::cin >> n >> q;

    std::vector<int> a(n);
    for(auto &in : a) std::cin >> in;

    using S = int;
    constexpr S e = 1e9 + 1;
    auto op = [](S lhs, S rhs) -> S { return std::min(lhs, rhs); };
    algorithm::SegmentTree<S> segtree(op, e, a);

    while(q--) {
        int l, r;
        std::cin >> l >> r;

        std::cout << segtree.prod(l, r) << "\n";
    }
}
