제출한 코드
=============

```c++
//
//  24265.cpp
//  Algorithm
//
//  Created by Jini on 11/25/24.
//

#include <iostream>

using namespace std;

//MenOfPassion(A[], n) { //배열 A와 n을 받음
//    sum <- 0; //sum값을 0으로
//    for i <- 1 to n - 1 //n-1번 수행
//        for j <- i + 1 to n //n-i번 수행
//           sum <- sum + A[i] × A[j]; # 코드1 //1번 수행, 총 n*(n-1)/2번 수행
//    return sum;
//} //항상 n*(n-1)/2번 수행, 시간 복잡도 O(n^2)이므로 최고차항의 차수는 2

int main() {
    long long n;
    
    cin >> n;
    
    cout << n * (n - 1) / 2 << "\n" << 2 << "\n";
    
    return 0;
}
```

> i = 1, j = n-1번 수행   
> i = 2, j = n-2번 수행   
> i = 3, j = n-3번 수행   
> ...   
> ...   
> i = n-1, j = 1번 수행   
> 즉 $\sum_{k=1}^{n-1} k = \frac{n(n-1)}{2}$ 번 수행   

