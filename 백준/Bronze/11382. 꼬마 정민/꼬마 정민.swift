//
//  11382.swift
//  Algorithm
//
//  Created by Jini on 12/19/24.
//

import Foundation

let input = readLine()!

let num = input.split(separator: " ").map { Int($0)! }

let a = num[0]
let b = num[1]
let c = num[2]

print(a + b + c)
