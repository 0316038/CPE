//
//  main.cpp
//  10404:Primary Arithmetic
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int a,b;
    while(cin >> a >> b){
        if(a == 0 && b == 0)    break;
        if(a>=b){
            swap(a,b);
        }
        int temp,carry=0,count=0;
        while(b){
            temp = a%10 + b%10 + carry;
            if(temp >= 10){
                count++;
                carry = 1;
                temp -= 10;
            }
            else{
                carry = 0;
            }
            a/=10;
            b/=10;
        }
        if(count == 0){
            cout << "No carry operation." << endl;
        }
        else if(count == 1){
            cout << "1 carry operation." << endl;
        }
        else{
            cout << count << " carry operations." << endl;
        }
    }
    return 0;
}
