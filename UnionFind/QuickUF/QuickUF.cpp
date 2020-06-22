//
//  QuickUF.cpp
//  UnionFind
//
//  Created by Kristopher Jackson
//  Copyright © 2020 Kristopher Jackson. All rights reserved.
//

#include "QuickUF.hpp"

QuickUF::QuickUF(int n) {
    N = n; C = n;
    id = new int[N];
    for(int i = 0; i < N; i++) id[i] = i;
};

void QuickUF::unionize(int p, int q) {
    int pid = id[p];
    int qid = id[q];

    for (int i = 0; i < N; i++) {   // This is too slow when you run this on N objects (quadratic time!)
        bool didUnion = false;
        if (id[i] == pid) {
            id[i] = qid;
            didUnion = true;
        } 
        if (didUnion) C--; 
    }
};

int QuickUF::find(int p) {
    return id[p];
};

bool QuickUF::connected(int p, int q) {
    return id[p] == id[q];
};

int QuickUF::count() {
    return C;
};

QuickUF::~QuickUF() {
    delete [] id;  // Free memory
    id = NULL;
};
