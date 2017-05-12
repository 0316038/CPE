//
//  main.cpp
//  10468:Maximum Product
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    while(cin >> n){
        count++;
        int* p = new int[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        long int temp;
        long int max = 0;
        for(int i=0;i<n;i++){
            temp = 1;
            for(int j=i;j<n;j++){
                temp *= p[j];
                if(temp > max)  max = temp;
            }
        }
        cout << "Case #" << count << ": The maximum product is " << max <<
        "."<< endl << endl;
    }
}
