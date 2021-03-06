/*
 * Problem Statement: https://www.hackerrank.com/challenges/cpp-lower-bound/problem
 * Author: striker
 *
 * Copyright 2020 striker
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
*/

#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <cstdio>

typedef unsigned long long ull_t;
typedef long long ll_t;

#define FAST_IO(value) std :: ios :: sync_with_stdio(value); std :: cin.tie(NULL)
#define MOD 1000000007 // Constant (prime number) used in most competitive programming problems to reduce the answer to a 32-bit integer.
#define PI 3.141592653589793 // Number of digits(15) of Pi which JPL uses for Interplanetary Caculations.
#define GOLDEN_RATIO 1.618033988749895 // Number of digits(15).

int main(void) {
    FAST_IO(0);
    int n;
    std :: cin >> n;
    std :: vector <int> sequence(n);
    for(int i = 0; i < n; ++i) {
        std :: cin >> sequence[i];
    }
    int tot_query;
    std :: cin >> tot_query;
    for(int i = 0; i < tot_query; ++i) {
        int number;
        std :: cin >> number;
        std :: vector<int> :: iterator itr = std :: lower_bound(sequence.begin(), sequence.end(), number);
        int index_loc = 1 + (itr - sequence.begin());
        if(*itr == number) {
            std :: cout << "Yes " << index_loc << std :: endl;
        } else {
            std :: cout << "No " << index_loc << std :: endl;
        }
    }
    return 0;
}
