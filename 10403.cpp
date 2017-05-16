//
//  main.cpp
//  10403:Funny Encryption Method
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int binary(int m);
int HEX(int m);

int main(){
    int n,m;
    cin >> n;
    while(n--){
        cin >> m;
        cout << binary(m) << " " << HEX(m) << endl;
    }
}

int binary(int m)
{
    int b1 = 0;
    while(m){
        if(m%2==1)  b1++;
        m/=2;
    }
    return b1;
}

int HEX(int m){
    int b2 = 0;
    while(m){
        b2 += binary(m%10);
        m/=10;
    }
    return b2;
}



