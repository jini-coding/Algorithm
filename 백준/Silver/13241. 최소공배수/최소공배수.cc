//
//  13241.cpp
//  Algorithm
//
//  Created by Jini on 11/21/24.
//

#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b) { //유클리드 호제법 이용
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    long long int num1, num2, result;
    
    cin >> num1 >> num2;
    
    result = gcd(num1, num2);
    
    cout << num1 * num2 / result << "\n";
    
    return 0;
}

