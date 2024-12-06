//
//  13909.cpp
//  Algorithm
//
//  Created by Jini on 12/6/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    
    cin >> n;
    
    // 창문이 열려있으려면 홀수번 방문되어야 함 (즉, 홀수개의 약수를 가져야 함 = 제곱수)
    for (int i = 1; i * i <= n; i++) {
        cnt++;
    }
    
    cout << cnt << "\n";
    
    return 0;
}
