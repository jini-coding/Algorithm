//
//  10773.swift
//  Algorithm
//
//  Created by Jini on 1/26/25.
//

import Foundation

let k = Int(readLine()!)!

var stack: [Int] = []

for _ in 0..<k {
    let num = Int(readLine()!)!
    
    if num == 0 {
        stack.removeLast()
    } else {
        stack.append(num)
    }
}

print(stack.reduce(0, +))

