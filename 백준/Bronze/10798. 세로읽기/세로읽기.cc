//
//  10798.cpp
//  Algorithm
//
//  Created by Jini on 11/17/24.
//

#include <iostream>

using namespace std;

int main() {
    string arr[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < arr[j].size()) cout << arr[j][i];
        }
    }
    
    cout << "\n";
    
    return 0;
}
