//
//  11050.cpp
//  Algorithm
//
//  Created by Jini on 12/9/24.
//

#include <iostream>

using namespace std;

int factorial(int num) {
    if (num == 0) return 1;
    
    int result = 1;
    
    for (int i = num; i >= 1; i--) result *= i;
    
    return result;
}

int main() {
    int n, k;
    
    cin >> n >> k;
    
    cout << factorial(n) / (factorial(k) * factorial(n-k)) << "\n";
    
    return 0;
}
