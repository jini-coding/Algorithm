//
//  10950.swift
//  Algorithm
//
//  Created by Jini on 12/20/24.
//

import Foundation

let t = Int(readLine()!)!

for _ in 1...t {
    var num = readLine()!.split(separator: " ").map{ Int($0)! }
    print(num[0] + num[1])
}

