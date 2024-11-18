//
//  2563.cpp
//  Algorithm
//
//  Created by Jini on 11/18/24.
//

#include <iostream>

using namespace std;

int paper[100][100] = {0}; //흰 도화지 영역

int main() {
    int n, x, y; //색종이 수, x위치, y위치
    int result = 0; //검은 영역 넓이
    
    cin >> n;
    
    while (n--) {
        cin >> x >> y;
        
        for (int i = y; i < y + 10; i++) { //검은색 색종이 영역 내
            for (int j = x; j < x + 10; j++) {
                if (paper[j][i] == 0) { //0이면 검은색 색종이 안 붙여진 영역
                    paper[j][i] = 1; //고로 1로 바꿔줌
                    result++; //검은 영역 넓이 추가
                } //0이 아니면 이미 검은색 색종이 붙여져 있는 것이므로 패스
            }
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
