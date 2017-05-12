//
//  main.cpp
//  11481:Square Sums
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    int case_num = 0;
    vector< vector<int> > vec;    //2D array
    while(cin >> n){
        if(n==0)    break;
        case_num++;
        vec.resize(n);
        for(int i=0;i<n;i++){
            vec[i].resize(n);
        }
        int num;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> num;
                vec[i][j] = num;
            }
        }
        int x = 0;
        int sum;
        vector<int> ans;
        int a,b;
        if(n%2==0){
            a=n/2-1;
            b=n/2;
        }
        else{
            a=n/2;
            b=n/2;
        }
        while(b+x < n && a-x >= 0){
            sum = 0;
            for(int i=a-x; i<=b+x; i++){
                for(int j=a-x; j<=b+x; j++){
                    sum += vec[i][j];
                }
            }
            for(int i=0; i<x; i++){
                sum = sum-ans[i];
            }
            ans.push_back(sum);
            x++;
        }

       
        reverse(ans.begin(),ans.end());
        cout << "Case " << case_num << ": ";
        vector<int>::iterator it;
        for(it=ans.begin();it!=ans.end();it++){
            if(it==ans.begin())  cout << *it;
            else cout << " " << *it;
        }
        cout << endl;
        vec.clear();
        ans.clear();
    }
    return 0;
}
