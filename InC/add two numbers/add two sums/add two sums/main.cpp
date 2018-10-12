//
//  main.cpp
//  add two sums
//
//  Created by 姜庆彩 on 2018/1/31.
//  Copyright © 2018年 姜庆彩. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int func(int x)
{
    int countx = 0;
    while(x) //当x不为0时循环
    {
        countx ++; //记录循环次数
        x = x&(x-1);  //&是按位"与"操作，即以二进制bit进行比较，只有全1时才是1，否则该位为0
    }
    return countx;//返回循环次数
}
void print_value(int* x)
{
    printf("%d\n",++*x);
}
int main(int argc, const char * argv[]) {
    int i = 500;
    cout <<func(i) <<endl;
    int u = 25;
    print_value(&u);
    int o = 0;
    o=
    return 0;
}
