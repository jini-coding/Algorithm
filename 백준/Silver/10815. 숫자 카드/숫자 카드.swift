//
//  10815.swift
//  Algorithm
//
//  Created by Jini on 1/25/25.
//

import Foundation

let n = Int(readLine()!)!
let set = Set(readLine()!.split(separator: " ").map { Int($0)! })

let m = Int(readLine()!)!
let cards = readLine()!.split(separator: " ").map { Int($0)! }

for i in cards {
    print(set.contains(i) ? 1 : 0 , terminator: " ")
}

print()
