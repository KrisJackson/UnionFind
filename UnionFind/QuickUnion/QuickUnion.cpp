//
//  QuickUnion.cpp
//  UnionFind
//
//  Created by Kristopher Jackson
//  Copyright © 2020 Kristopher Jackson. All rights reserved.
//

#include "QuickUnion.hpp"

QuickUnion::QuickUnion(int n) {
    N = n;
    id = new int[N];
    for(int i = 0; i < N; i++) id[i] = i;
};

void QuickUnion::unionize(int p, int q) {
    int pRoot = root(p);
    int qRoot = root(q);
    id[pRoot] = qRoot;
};

int QuickUnion::find(int p) {
    return root(p);
};

bool QuickUnion::connected(int p, int q) {
    return root(p) == root(q);
};

QuickUnion::~QuickUnion() {
    delete [] id;  // Free memory
    id = NULL;
};

// PRIVATE METHODS

int QuickUnion::root(int i) {
    while (i != id[i]) i = id[i];   // Gets slower as tree gets taller
    return i;
}
