//
//  11022.swift
//  Algorithm
//
//  Created by Jini on 12/22/24.
//

import Foundation

let t = Int(readLine()!)!

for i in 1...t {
    var num = readLine()!.split(separator: " ").map{ Int($0)! }
    print("Case #\(i): \(num[0]) + \(num[1]) = \(num[0] + num[1])")
}

