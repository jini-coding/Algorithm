//
//  1316.cpp
//  Algorithm
//
//  Created by Jini on 12/4/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    
    cin >> n;
    
    while (n--) {
        string str;
        
        cin >> str;
        
        int check = 1;
        
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < i; j++) {
                if (str[i] != str[i - 1] && str[i] == str[j]) {
                    check = 0;
                    break;
                }
            }
            if (check == 0) break;
        }
        if (check == 1) cnt++;
    }
    
    cout << cnt << "\n";
    
    return 0;
}
