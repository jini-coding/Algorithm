//
//  10869.swift
//  Algorithm
//
//  Created by Jini on 12/16/24.
//

import Foundation

let input = readLine()!

let num = input.split(separator: " ").map { Int($0)! }

let a = num[0]
let b = num[1]

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a % b)
