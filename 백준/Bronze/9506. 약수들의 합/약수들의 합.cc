//
//  9506.cpp
//  Algorithm
//
//  Created by Jini on 11/28/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    
    while (1) {
        cin >> n;
        
        if (n == -1) break;
        
        else {
            int sum = 0;
            vector<int> v;
            
            for (int i = 1; i < n; i++) {
                if (n % i == 0) {
                    v.push_back(i);
                    sum += i;
                }
            }
            
            if (sum == n) {
                cout << n << " = ";
                
                for (int i = 0; i < v.size() - 1; i++) {
                    cout << v[i] << " + ";
                }
                cout << v[v.size() - 1] << "\n";
            }
            else {
                cout << n << " is NOT perfect." << "\n";
            }
        }
    }
    
    return 0;
}
