//
//  14215.cpp
//  Algorithm
//
//  Created by Jini on 11/26/24.
//

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    int tmp;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int arr[3];
    int tmp = 0, result = 0;
    
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    
    bubbleSort(arr, 3);
    
    tmp = arr[0] + arr[1]; // 작은 두 변의 길이 합
    
    // 가장 긴 변의 길이가 나머지 두 변의 길이 합보다 작아야 삼각형 성립
    if (arr[2] < tmp) result = arr[2] + tmp;
    else result = tmp - 1 + tmp;
    
    cout << result << "\n";
    
    return 0;
}

