# MST Expansion with Redundancy Using Kruskal Algorithm

## Overview

This project implements a Minimum Spanning Tree (MST) solution using Kruskal's Algorithm with Union-Find (Disjoint Set Union) optimization. The objective is to connect all cities with the minimum possible cost while providing network redundancy by adding one extra connection.

## Problem Statement

A civil engineering team must design a minimum-cost connection plan between multiple cities. The network should:

* Connect all cities with minimum total cost.
* Ensure redundancy by adding an additional edge.
* Prevent network isolation if a single connection fails.

The solution first constructs the MST and then selects the least-cost non-MST edge to provide fault tolerance.

## Algorithm Used

### Kruskal's Algorithm

1. Sort all edges in ascending order of weight.
2. Select the smallest edge that does not form a cycle.
3. Continue until all vertices are connected.
4. Compute the MST cost.
5. Add the cheapest edge not included in the MST to create redundancy.

### Data Structure

* Disjoint Set Union (DSU)

  * Path Compression
  * Union by Rank

## Time Complexity

| Operation             | Complexity |
| --------------------- | ---------- |
| Sorting Edges         | O(E log E) |
| Union-Find Operations | O(E α(V))  |
| Overall               | O(E log E) |

where:

* E = Number of edges
* V = Number of vertices
* α(V) = Inverse Ackermann Function

## Project Structure

```text
MST-Expansion-With-Redundancy/
│
├── src/
│   └── mst.cpp
│
├── README.md
│
└── docs/
    └── Case_Study_Report.pdf
```

## Sample Output

```text
MST Cost = 34
Redundant Network Cost = 41
```

## Features

* Minimum Cost Network Construction
* Cycle Detection using DSU
* Path Compression Optimization
* Union by Rank Optimization
* Redundant Edge Selection
* Efficient Graph Processing

## Compilation

### Using g++

```bash
g++ mst.cpp -o mst
```

### Run

```bash
./mst
```

## Applications

* Transportation Networks
* Power Distribution Systems
* Telecommunication Networks
* Computer Network Design
* Infrastructure Planning

## Author

Tarun Varakala

## License

This project is developed for academic and educational purposes.
