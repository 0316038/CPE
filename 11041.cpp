//
//  main.cpp
//  11041:Children's Game
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
    return (a+b) > (b+a);
}

int main(){
    int n;
    string num;
    vector <string> vec;
    while(cin >> n){
        if(n == 0)  break;
        while(n--){
            cin >> num;
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end(),compare);
        for(int i=0;i<vec.size();i++){
            cout << vec[i] ;
        }
        cout << endl;
        vec.clear();
    }
    
    
}
