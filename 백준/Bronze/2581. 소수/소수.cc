//
//  2581.cpp
//  Algorithm
//
//  Created by Jini on 11/30/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    vector<int> v;
    int sum = 0;
    
    cin >> m >> n;
    
    for (int i = m; i <= n; i++) {
        int cnt = 0;
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }
        
        if (cnt == 2) {
            v.push_back(i);
            sum += i;
        }
    }
    
    if (v.size() == 0) cout << -1 << "\n";
    else cout << sum << "\n" << v[0] << "\n";
    
    
    return 0;
}

