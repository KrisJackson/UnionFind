//
//  QuickUF.hpp
//  UnionFind
//
//  Created by Kristopher Jackson
//  Copyright © 2020 Kristopher Jackson. All rights reserved.
//

#ifndef QuickUF_hpp
#define QuickUF_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class QuickUF {
private:
    int N, C;                           // Number of nodes and components
    int* id;                            // Pointer to array containing nodes

public:
    QuickUF(int N);                     // Initialize nodes
    void unionize(int p, int q);        // Union node p and q
    bool connected(int p, int q);       // Returns true if node p and q are connected
    int find(int p);                    // Returns components identifier for node p
    int count();                        // Returns number of components
    ~QuickUF();
};

#endif 
