//
//  25304.swift
//  Algorithm
//
//  Created by Jini on 12/21/24.
//

import Foundation

var sum = 0

let price = Int(readLine()!)! // 구매한 물건 가격
let num = Int(readLine()!)! // 구매한 물건 종류의 수

for i in 1...num {
    var item = readLine()!.split(separator: " ").map{ Int($0)! } // 구매한 물건 가격과 개수
    sum += item[0] * item[1]
}

if sum == price {
    print("Yes")
}
else {
    print("No")
}

