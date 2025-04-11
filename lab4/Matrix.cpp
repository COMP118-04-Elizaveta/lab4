/** \file main.cpp
 * \brief -
 *
 *
 *
 */

#include "Matrix.h"

#include <iostream>
#include <cassert>

using namespace std;


void printMatrix (const double mat[][MAX_COL], const int maxRow){
    
    assert (maxRow > 0);
    cout << "Content of Matrix\n";
    
    for (int i = 0; i < maxRow; i++){
        cout << "Row " << i << ":  ";
        for (int j = 0; j < MAX_COL; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
