//
//  1193.cpp
//  Algorithm
//
//  Created by Jini on 11/19/24.
//

#include <iostream>

using namespace std;

int main() {
    int num;
    int line = 1;
    
    cin >> num;
    
    while (num > line) {
        num -= line;
        line++;
    }
    
    if (line % 2 == 0) cout << num << "/" << line - num + 1 << "\n";
    else cout << line - num + 1 << "/" << num << "\n";
    
    return 0;
}
