//
//  10813.swift
//  Algorithm
//
//  Created by Jini on 4/2/25.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }

let n = input[0]
let m = input[1]

var array = [Int](1...n)

for _ in 0..<m {
    let nums = readLine()!.split(separator: " ").map { Int($0)! }
    
    let i = nums[0] - 1
    let j = nums[1] - 1
    
    array.swapAt(i, j)
}

array.forEach { print($0, terminator: " ") }

