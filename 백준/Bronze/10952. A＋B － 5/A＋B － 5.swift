//
//  10952.swift
//  Algorithm
//
//  Created by Jini on 12/22/24.
//

import Foundation

while true {
    var num = readLine()!.split(separator: " ").map{ Int($0)! }
    
    if (num[0] == 0 && num[1] == 0) {
        break;
    }
    
    print(num[0] + num[1])
}

