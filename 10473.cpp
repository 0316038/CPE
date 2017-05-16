//
//  main.cpp
//  10473:Summing Digits
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>

using namespace std;

long int SummingDigits(long int n);

int main(){
    long int n;
    while(cin >> n){
        if(n == 0)  break;
        long int Fn = SummingDigits(n);
        while(Fn > 9){
            Fn = SummingDigits(Fn);
        }
        cout << Fn << endl;
    }
}

long int SummingDigits(long int n)
{
    long int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
