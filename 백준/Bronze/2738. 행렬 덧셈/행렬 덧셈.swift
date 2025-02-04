//
//  2738.swift
//  Algorithm
//
//  Created by Jini on 2/4/25.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0]
let m = input[1]

var matrix1: [[Int]] = []
var matrix2: [[Int]] = []

var result = [[Int]](repeating: [Int](repeating: 0, count: m), count: n)

for _ in 0..<n {
    matrix1.append(readLine()!.split(separator: " ").map { Int($0)! })
}

for _ in 0..<n {
    matrix2.append(readLine()!.split(separator: " ").map { Int($0)! })
}

for i in 0..<n {
    for j in 0..<m {
        result[i][j] = matrix1[i][j] + matrix2[i][j]
    }
}

for i in 0..<n {
    result[i].forEach { print($0, terminator: " ") }
    print()
}
