//
//  19532.cpp
//  Algorithm
//
//  Created by Jini on 12/1/24.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    
    cin >> a >> b >> c >> d >> e >> f;
    
    int y = (c * d - a * f) / (b * d - a * e);
    int x = (c * e - b * f) / (a * e - b * d);
    
    cout << x << " " << y << "\n";
    
    return 0;
}
