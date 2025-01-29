//
//  10810.swift
//  Algorithm
//
//  Created by Jini on 1/29/25.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }

let n = input[0]
let m = input[1]

var array = [Int](repeating: 0, count: n)

for _ in 0..<m {
    let ijk = readLine()!.split(separator: " ").map { Int($0)! }
    
    for index in ijk[0]...ijk[1] {
        array[index - 1] = ijk[2]
    }
}

array.forEach { print($0, terminator: " ") }
print()
