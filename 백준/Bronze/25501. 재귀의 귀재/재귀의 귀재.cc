//
//  25501.cpp
//  Algorithm
//
//  Created by Jini on 12/12/24.
//

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int cnt;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int t;
    string str;
    
    cin >> t;
    
    while (t--) {
        cin >> str;
        cnt = 0;
        cout << isPalindrome(str.c_str()) << " ";
        cout << cnt << "\n";
    }
    
    return 0;
}
