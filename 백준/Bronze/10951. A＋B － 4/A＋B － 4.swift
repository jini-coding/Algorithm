//
//  10951.swift
//  Algorithm
//
//  Created by Jini on 12/24/24.
//

import Foundation

while let input = readLine() {
    let num = input.split(separator: " ").map{ Int($0)! }
    
    print(num[0] + num[1])
}

