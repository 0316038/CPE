//
//  main.cpp
//  10453:Odd Sum
//
//  Created by 石瑾旋 on 2017/5/6.
//  Copyright © 2017年 石瑾旋. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        if(a%2 == 0)    a++;
        if(b%2 == 0)    b--;
        int sum = 0;
        for(int j=a; j<=b; j+=2){
            sum += j;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
