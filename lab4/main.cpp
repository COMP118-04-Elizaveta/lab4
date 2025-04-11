/** \file main.cpp
 *
 *
 *
 *
 */

#include "Matrix.h"

#include <iostream>

using namespace std;

/**
 * @todo comment
 */
int main() {
    
    constexpr int MAX_ROW = 4;
    
    double mat[MAX_ROW][MAX_COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //@todo delete random values
    
    printMatrix (mat, MAX_ROW);
    cout << "Have a nice day :3\n";
    
    return 0;
}
