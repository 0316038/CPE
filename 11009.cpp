//
//  main.cpp
//  11009:All in All
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    string a,b;
    while(cin >> a >> b){
        int flag = 0;
        for(int i=0;i<a.length();i++){
            for(int j=0;j<b.length();j++){
                if(a[i] == b[j]){
                    b = b.substr(j+1,b.length()-j-1);
                    break;
                }
                if(j == b.length()-1){
                    flag = 1;
                }
            }
        }
        if(flag == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
