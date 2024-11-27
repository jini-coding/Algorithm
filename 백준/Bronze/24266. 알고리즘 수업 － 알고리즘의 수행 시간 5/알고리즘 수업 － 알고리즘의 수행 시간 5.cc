//
//  24266.cpp
//  Algorithm
//
//  Created by Jini on 11/27/24.
//

#include <iostream>

using namespace std;

//MenOfPassion(A[], n) { //배열 A와 n을 받음
//    sum <- 0; //sum값을 0으로
//    for i <- 1 to n //n번 수행
//        for j <- 1 to n //n번 수행
//            for k <- 1 to n //n번 수행
//                sum <- sum + A[i] × A[j] × A[k]; # 코드1 //1번 수행, 총 n*n*n번 수행
//    return sum;
//} //항상 n*n*n번 수행, 시간 복잡도 O(n^3)이므로 최고차항의 차수는 3

int main() {
    long long n;
    
    cin >> n;
    
    cout << n * n * n << "\n" << 3 << "\n";
    
    return 0;
}

