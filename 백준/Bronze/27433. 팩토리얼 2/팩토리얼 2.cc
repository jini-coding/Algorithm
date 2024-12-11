//
//  27433.cpp
//  Algorithm
//
//  Created by Jini on 12/11/24.
//

#include <iostream>

using namespace std;

long long factorial(int num) {
    if (num <= 1) return 1;
    
    else return num * factorial(num - 1);
}

int main() {
    int n;
    
    cin >> n;
    
    cout << factorial(n) << "\n";
    
    return 0;
}
