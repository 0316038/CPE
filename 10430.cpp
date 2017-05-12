//
//  main.cpp
//  10430:Soundex
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    vector<int> vec;
    while(cin >> s){
        for(int i=0; i<s.length(); i++){
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V'){
                vec.push_back(1);
            }
            else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z'){
                vec.push_back(2);
            }
            else if(s[i]=='D' || s[i]=='T'){
                vec.push_back(3);
            }
            else if (s[i]=='L'){
                vec.push_back(4);
            }
            else if (s[i]=='M' || s[i]=='N'){
                vec.push_back(5);
            }
            else if (s[i]=='R'){
                vec.push_back(6);
            }
            else{
                vec.push_back(0);
            }
        }
        for(int i=0;i<vec.size();i++){
            if(i>0 && vec[i]==vec[i-1]) continue;
            if(vec[i]!=0) cout << vec[i];
        }
        cout << endl;
        vec.clear();
    }
}
