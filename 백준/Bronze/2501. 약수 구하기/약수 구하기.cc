//
//  2501.cpp
//  Algorithm
//
//  Created by Jini on 11/28/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    vector<int> v;
    
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) v.push_back(i);
    }
    
    if (k <= v.size()) cout << v[k - 1] << "\n";
    else cout << 0 << "\n";
    
    return 0;
}
