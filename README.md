# algorithm-dev
My library for competitive programming.

[![Actions Status](https://github.com/today2098/algorithm/workflows/verify/badge.svg)](https://github.com/today2098/algorithm-dev/actions)
[![GitHub Pages](https://img.shields.io/static/v1?label=GitHub+Pages&message=+&color=brightgreen&logo=github)](https://today2098.github.io/algorithm-dev/)
[![Today](https://img.shields.io/endpoint?url=https%3A%2F%2Fatcoder-badges.now.sh%2Fapi%2Fatcoder%2Fjson%2FToday)](https://atcoder.jp/users/Today)
[![Today2049](https://img.shields.io/endpoint?url=https%3A%2F%2Fatcoder-badges.now.sh%2Fapi%2Fcodeforces%2Fjson%2FToday2049)](https://codeforces.com/profile/Today2049)


## Description

- [Data Structure](#DataStructure)
    - [Segment Tree](#SegmentTree)
    - [Union-Find](#UnionFind)
    - [Others](#DataStructureOthers)
- [Graph](#Graph)
    - [Shortest Path](#ShortestPath)
    - [Flow](#Flow)
    - [Tree](#Tree)
    - [Others](#GraphOthers)
- [DP](#DP)
- [String](#String)
- [Math](#Math)
    - [Number Theory](#NumberTheory)
    - [Algebra](#Algebra)
    - [Combinatorics](#Combinatorics)
    - [Modular Arithmetic](#ModularArithmetic)
    - [Convolution](#Convolution)
    - [Others](#MathOthers)
- [Geometry](#Geometry)
- [Others](#Others)
- [Utils](#Utils)


<a id="DataStructure"></a>
### Data Structure

<a id="SegmentTree"></a>
#### Segment Tree

- Binary Indexed Tree
- Binary Indexed Tree (0-based index)
- 二次元BIT
- 二次元BIT (0-based index)
- [Segment Tree](https://today2098.github.io/algorithm-dev/lib/DataStructure/SegmentTree/segment_tree.hpp)
- Lazy Segment Tree（遅延評価セグメント木）
- Dynamic Segment Tree（動的セグメント木）
- [Sparse Table](https://today2098.github.io/algorithm-dev/lib/DataStructure/SegmentTree/sparse_table.hpp)


<a id="UnionFind"></a>
#### Union-Find

- [Union-Find（素集合データ構造）](https://today2098.github.io/algorithm-dev/lib/DataStructure/UnionFind/union_find.hpp)
- 重み付きUnion-Find
- Rollback付きUnion-Find
- Partially Persistent Union-Find（部分永続Unionf-Find）


<a id="DataStructureOthers"></a>
#### Others

- 二分ヒープ
- AVL木
- Binary Trie
- Integer Interval Set（整数の集合を区間で管理するデータ構造）


<a id="Graph"></a>
### Graph

<a id="ShortestPath"></a>
#### Shortest Path

- [Bellman-Ford Algorithm（単一始点最短経路）](https://today2098.github.io/algorithm-dev/lib/Graph/ShortestPath/bellman_ford.hpp)
- [Dijkstra's Algorithm（単一始点最短経路）](https://today2098.github.io/algorithm-dev/lib/Graph/ShortestPath/dijkstra.hpp)
- Floyd–Warshall Algorithm（全点対間最短経路）


<a id="Flow"></a>
#### Flow

- Ford-Fulkerson Algorithm（最大流）
- Dinic's Algorithm（最大流）
- 最小費用流


<a id="Tree"></a>
#### Tree

- Double Sweep（木の直径）
- Lowest Common Ancestor（最近共通祖先）
- Heavy-Light Decomposition（HL分解，重軽分解）


<a id="GraphOthers"></a>
#### Others

- Prim's Algorithm（最小全域木）
- Strongly Connected Components（強連結成分分解）
- Low-Link（橋，関節点）
- Topological Sort（トポロジカルソート）


<a id="DP"></a>
### DP

- Longest Common Subsequence（最長共通部分列）
- Longest Increasing Subsequence（最長増加部分列）
- Edit Distance（編集距離）


<a id="String"></a>
### String

- Z Algorithm（最長共通接頭辞）
- Manacher's Algorithm（最長回文）


<a id="Math"></a>
### Math

<a id="NumberTheory"></a>
#### Number Theory

- [素数判定](https://today2098.github.io/algorithm-dev/src/Math/NumberTheory/is_prime.hpp)
- [素因数分解](https://today2098.github.io/algorithm-dev/src/Math/NumberTheory/prime_factorize.hpp)
- [約数列挙](https://today2098.github.io/algorithm-dev/src/Math/NumberTheory/divisors.hpp)
- [Sieve of Eratosthenes（エラトステネスの篩）](https://today2098.github.io/algorithm-dev/lib/Math/NumberTheory/sieve.hpp)
- [線形篩](https://today2098.github.io/algorithm-dev/lib/Math/NumberTheory/linear_sieve.hpp)
- [区間篩](https://today2098.github.io/algorithm-dev/lib/Math/NumberTheory/segment_sieve.hpp)
- [Greatest Common Divisor（最大公約数）](https://today2098.github.io/algorithm-dev/lib/Math/NumberTheory/greatest_common_divisor.hpp)
- [Least Common Multiple（最小公倍数）](https://today2098.github.io/algorithm-dev/lib/Math/NumberTheory/least_common_multiple.hpp)
- 拡張ユークリッドの互除法
- Chinese Remainder Theorem（中国剰余定理）
- Garner's Algorithm（中国剰余定理）
- Floor Sum
- オイラーのファイ関数


<a id="Algebra"></a>
#### Algebra

- きたまさ法


<a id="Combinatorics"></a>
#### Combinatorics

- 順列，組合せ，重複組合せ
- 組合せ（mod付き）
- 完全順列の総数，モンモール数（mod付き）


<a id="ModularArithmetic"></a>
#### Modular Arithmetic

- [Modint構造体](https://today2098.github.io/algorithm-dev/lib/Math/ModularArithmetic/modint.hpp)
- 動的Modint


<a id="Convolution"></a>
#### Convolution

- Discrete Fourier Transform（離散フーリエ変換）
- Fast Fourier Transform（高速フーリエ変換）
- Number Theoretic Transform（数論変換）


<a id="MathOthers"></a>
#### Others

- [繰り返し二乗法（べき乗）](https://today2098.github.io/algorithm-dev/lib/Math/power.hpp)
- [ニュートン法（平方根）](https://today2098.github.io/algorithm-dev/lib/Math/square_root.hpp)
- 多倍長整数


<a id="Others"></a>
### Others

- Mo's Algorithm（クエリ平方分割）
- Population Count (Popcount)


<a id="Utils"></a>
### Utils

- [My Template](https://today2098.github.io/algorithm-dev/lib/Utils/template.hpp)
- [デバッグ用関数形式マクロ](https://today2098.github.io/algorithm-dev/lib/Utils/debug.hpp)
- [処理時間計測クラス](https://today2098.github.io/algorithm-dev/lib/Utils/timer.hpp)
- [多次元配列生成](https://today2098.github.io/algorithm-dev/lib/Utils/table.hpp)
