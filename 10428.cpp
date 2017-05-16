//
//  main.cpp
//  10428:Simply Emirp
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>

using namespace std;

int Reverse(int n);
bool isPrime(int n);

int main(){
    int n;
    while(cin >> n){
        int reverse_n = Reverse(n);
        if(isPrime(n) && isPrime(reverse_n) && n!=reverse_n){
            cout << n << " is emirp." << endl;
        }
        else if(isPrime(n)){
            cout << n << " is prime." << endl;
        }
        else{
            cout << n << " is not prime." << endl;
        }
        
    }
}

int Reverse(int n)
{
    int temp = 0;
    while(n){
        temp = temp*10 + n%10;
        n/=10;
    }
    return temp;
}

bool isPrime(int n)
{
    bool tag = 1;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            tag = 0;
            break;
        }
    }
    return tag;
}

