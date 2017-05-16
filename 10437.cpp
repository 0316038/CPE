//
//  main.cpp
//  10437:Zeros and Ones
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    int n,i,j;
    int case_num = 0;
    while(cin >> s){
        case_num++;
        cin >> n;
        cout << "Case " << case_num << ":" << endl;
        while(n--){
            cin >> i >> j;
            int min = (i<=j ? i : j);
            int max = (i>j ? i : j);
            bool tag = 1;
            for(int x=min+1; x<=max; x++){
                if(s[x] != s[min]){
                    tag = 0;
                    break;
                }
            }
            if(tag) cout << "Yes" << endl;
            else    cout << "No" << endl;
        }
    }
}



