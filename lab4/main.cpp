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
    
    int choice;
    
    do {
        cout << "\n0) Exit";
        cout << "\n1) Show Matrix";
        cout << "\n2) todo";
        cout << "\nEnter choice: ";
        cin >> choice;
        
        
        switch (choice) {
            case 0:
                break;
            case 1:
                printMatrix(mat, MAX_ROW);
                break;
            case 2:
                break;
            default:
                cout << "Invalid choice";
                break;
            
        }
        
    } while (choice != 0);
    
    printMatrix (mat, MAX_ROW);
    cout << "Have a nice day :3\n";
    
    return 0;
}
