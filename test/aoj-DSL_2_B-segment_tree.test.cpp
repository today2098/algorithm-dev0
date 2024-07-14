#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_B"

#include <iostream>

#include "../lib/DataStructure/SegmentTree/segment_tree.hpp"

int main() {
    int n;
    int q;
    std::cin >> n >> q;

    using S = int;
    constexpr S e = 0;
    auto op = [](S lhs, S rhs) -> S { return lhs + rhs; };
    algorithm::SegmentTree<S> segtree(op, e, n);

    while(q--) {
        int com;
        int x;
        int y;
        std::cin >> com >> x >> y;
        x--;

        if(com == 0) segtree.set(x, segtree.prod(x) + y);
        else std::cout << segtree.prod(x, y) << "\n";
    }
}
