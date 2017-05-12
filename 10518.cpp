//
//  main.cpp
//  10518
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int B;
    while(cin >> N >> B){
        double digits = 0;
        int factors[801]={0};
        for(int i=2;i<=N;i++){
            //計算位數
            digits += log10(i) / log10(B);
            
            //質因數分解
            int temp = i;
            for(int j=2; j<=B; j++){
                while(1){
                    if(temp % j == 0) {
                        factors[j]++;
                        temp /= j;
                    }
                    else break;
                }
            }
        }
        
        int zero = 0;
        while(1){
            int temp = B;
            for(int i=2; i<=B; i++){
                while(factors[i] && temp%i == 0){
                    factors[i]--;
                    temp /= i;
                }
            }
            if(temp == 1)   zero++;
            else break;
        }
        cout << zero << " " << (int)digits+1 << endl;
   
    }
    return 0;
}
