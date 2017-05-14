//
//  main.cpp
//  10502:Product of digits
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    int test,n;
    cin >> test;
    while(test--){
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        vector<int> ans;
        int flag = 1;
        while(n != 1 && flag){
            flag = 0;
            for(int i=9; i>=2; i--){
                if(n%i == 0){
                    n/=i;
                    ans.push_back(i);
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)   cout << -1 << endl;
        else{
            int x = (int)ans.size()-1;
            for(int i=x; i>=0; i--){
                cout << ans[i];
            }
            cout << endl;
        }
        ans.clear();
    }
}
