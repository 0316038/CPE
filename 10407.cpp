//
//  main.cpp
//  10407:Hashmat the brave warrior
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>

using namespace std;


int main(){
    long int a,b;
    while(cin >> a >> b){
        if(a >= b){
            cout << a-b << endl;
        }
        else{
            cout << b-a << endl;
        }
    }
}
