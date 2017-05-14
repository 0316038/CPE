//
//  main.cpp
//  10477:Rectangles
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>

using namespace std;

struct Point{
    int x1;
    int y1;
    int x2;
    int y2;
};

int main(){
    int n,m;
    int case_num = 0;
    cin >> n;
    while(n--){
        case_num++;
        cin >> m;
        Point p;
        int X1 = -10000;
        int Y1 = -10000;
        int X2 = 10000;
        int Y2 = 10000;
        while(m--){
            cin >> p.x1 >> p.y1 >> p.x2 >> p.y2;
            X1 = max(X1,p.x1);
            Y1 = max(Y1,p.y1);
            X2 = min(X2,p.x2);
            Y2 = min(Y2,p.y2);
        }
        int area = (X2-X1) * (Y2-Y1);
        if(X1 <= X2 && Y1 <= Y2){
            cout << "Case " << case_num << ": " << area << endl;
        }
        else cout << "Case " << case_num << ": " << "0" << endl;
    }
}
