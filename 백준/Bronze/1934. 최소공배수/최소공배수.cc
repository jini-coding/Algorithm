//
//  1934.cpp
//  Algorithm
//
//  Created by Jini on 11/20/24.
//

#include <iostream>

using namespace std;

int gcd(int a, int b) { //유클리드 호제법 이용 : 두 자연수 사이의 최대공약수(GCD)를 구하는 알고리즘
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int t;
    
    cin >> t;
    
    while (t--) {
        int num1, num2, result;
        
        cin >> num1 >> num2;
        
        result = gcd(num1, num2);
        
        cout << num1 * num2 / result << "\n";
    }
    
    return 0;
}
