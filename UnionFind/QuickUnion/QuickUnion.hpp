//
//  QuickUnion.hpp
//  UnionFind
//
//  Created by Kristopher Jackson
//  Copyright © 2020 Kristopher Jackson. All rights reserved.
//

#ifndef QuickUnion_hpp
#define QuickUnion_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class QuickUnion {
private:
    int N;                              // Number of nodes and components
    int* id;                            // Pointer to array containing nodes
    
    int root(int i);

public:
    QuickUnion(int N);                  // Initialize nodes
    void unionize(int p, int q);        // Union node p and q
    bool connected(int p, int q);       // Returns true if node p and q are connected
    int find(int p);                    // Returns components identifier for node p
    ~QuickUnion();
};

#endif /* QuickUnion_hpp */
