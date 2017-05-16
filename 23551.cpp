//
//  main.cpp
//  23551:Largest Square
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int main(){
    int t,m,n,q,r,c;
    char temp;
    vector< vector<char> > vec;
    cin >> t;
    while(t--){
        cin >> m >> n >> q;
        vec.resize(m);
        for(int i=0;i<m;i++)
            vec[i].resize(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> temp;
                vec[i][j] = temp;
            }
        }
        cout << m << " " << n << " " << q << endl;
        while(q--){
            cin >> r >> c;
            int x = 1,flag = 1,ans = 1;
            while(r-x>=0 && r+x<m && c-x>=0 && c+x<n && flag){
                for(int i=r-x;i<=r+x;i++){
                    for(int j=c-x;j<=c+x;j++){
                        if(vec[i][j]!=vec[r][c]){
                            flag = 0;
                        }
                    }
                }
                if(flag){
                    x++;
                    ans+=2;
                }
                
            }
            cout << ans << endl;
            
        }
    }
}
