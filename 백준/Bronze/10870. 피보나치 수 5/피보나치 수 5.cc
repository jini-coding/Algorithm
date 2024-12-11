//
//  10870.cpp
//  Algorithm
//
//  Created by Jini on 12/11/24.
//

#include <iostream>

using namespace std;

int fibo(int num) {
    if (num <= 1) return num;
    
    else return fibo(num - 2) + fibo(num - 1);
}

int main() {
    int n;
    
    cin >> n;
    
    cout << fibo(n) << "\n";
    
    return 0;
}
