//
//  main.cpp
//  10419:Divide, But Not Quite Conquer!
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int main(){
    long int n,m;
    while(cin >> n >> m){
        vector<long int> vec;
        vec.push_back(n);
        bool print = 1;
        while(n!=1){
            if(n%m!=0){
                print = 0;
                break;
            }
            n/=m;
            vec.push_back(n);
        }
        if(print){
            for(int i=0;i<vec.size();i++){
                if(i != vec.size()-1)
                    cout << vec[i] << " ";
                else
                    cout << vec[i];
            }
            cout << endl;
        }
        else{
            cout << "Boring!" << endl;
        }
    }
}



