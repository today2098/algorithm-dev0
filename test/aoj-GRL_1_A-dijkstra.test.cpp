#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_A"

#include <iostream>

#include "../lib/Graph/ShortestPath/dijkstra.hpp"

int main() {
    int n, m;
    int r;
    std::cin >> n >> m >> r;

    algorithm::Dijkstra<int> dijkstra(n);
    for(int i = 0; i < m; ++i) {
        int s, t;
        int d;
        std::cin >> s >> t >> d;

        dijkstra.add_edge(s, t, d);
    }
    dijkstra.dijkstra(r);

    for(int i = 0; i < n; ++i) {
        auto ans = dijkstra.distance(i);

        if(ans == dijkstra.infinity()) std::cout << "INF" << "\n";
        else std::cout << ans << "\n";
    }
}
