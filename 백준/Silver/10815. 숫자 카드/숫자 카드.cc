//
//  10815.cpp
//  Algorithm
//
//  Created by Jini on 12/2/24.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, m;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int num;
        
        cin >> num;
        
        cout << binary_search(v.begin(), v.end(), num) << " ";
    }
    
    cout << "\n";
    
    return 0;
}