//
//  5597.swift
//  Algorithm
//
//  Created by Jini on 1/4/25.
//

import Foundation

var nums: Set<Int> = []

for _ in 1...28 {
    let input = Int(readLine()!)!
    nums.insert(input)
}

for i in 1...30 {
    if !nums.contains(i) {
        print(i)
    }
}
