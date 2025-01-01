//
//  10871.swift
//  Algorithm
//
//  Created by Jini on 1/1/25.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }

let x = input[1]

let arr = readLine()!.split(separator: " ").map { Int($0)! }.filter { $0 < x }

arr.forEach { print($0, terminator: " ") }
print()
