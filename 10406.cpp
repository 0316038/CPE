//
//  main.cpp
//  10406:Vito's family
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
    cin >> n;
    while(n--){
        int r,s;
        cin >> r;
        vector<int> vec;
        for(int i=0;i<r;i++){
            cin >> s;
            vec.push_back(s);
        }
        sort(vec.begin(),vec.end());
        int optimal = vec[vec.size()/2];
        int sum = 0;
        for(int i=0;i<r;i++){
            int distance = (optimal>=vec[i] ? optimal-vec[i] : vec[i]-optimal);
            sum += distance;
        }
        cout << sum << endl;
    }
}
