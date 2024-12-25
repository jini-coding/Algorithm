//
//  10807.swift
//  Algorithm
//
//  Created by Jini on 12/25/24.
//

import Foundation

let n = Int(readLine()!)!

let arr = readLine()!.split(separator: " ").map { Int($0)! }

let target = Int(readLine()!)!

print(arr.filter { $0 == target }.count)

