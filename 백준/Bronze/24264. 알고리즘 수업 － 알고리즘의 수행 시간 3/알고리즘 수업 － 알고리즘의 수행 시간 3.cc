//
//  24264.cpp
//  Algorithm
//
//  Created by Jini on 11/24/24.
//

#include <iostream>

using namespace std;

//MenOfPassion(A[], n) { //배열 A와 n을 받음
//    sum <- 0; //sum값을 0으로
//    for i <- 1 to n //n번 수행
//        for j <- 1 to n //n번 수행 (위의 for문과 중첩되어 최종적으로 n*n번 수행됨)
//           sum <- sum + A[i] × A[j]; # 코드1 //for문을 돌 때마다 1번 수행, 즉 총 n*n번 수행
//    return sum;
//} //항상 n*n번 수행, 시간 복잡도 O(n^2)이므로 최고차항의 차수는 2

int main() {
    long long n;
    
    cin >> n;
    
    cout << n * n << "\n" << 2 << "\n";
    
    return 0;
}
