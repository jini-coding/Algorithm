//
//  10988.cpp
//  Algorithm
//
//  Created by Jini on 12/13/24.
//

#include <iostream>

using namespace std;

int main(){
    string str;
    
    cin >> str;
    
    int len = str.length();
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len-1-i]) {
            cout << 0 << "\n";
            return 0;
        }
    }
    
    cout << 1 << "\n";
    
    return 0;
}

