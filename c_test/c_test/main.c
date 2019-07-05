//
//  main.c
//  c_test
//  Author：bennyrhys@163.com
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //1.4分支结构的程序设计
    //1-12三整数排序-三变量交换法
    //输入 三个整数
    //输出 排序
    //注意！1if{}else{}避免分支 2<=兼顾111情况
    int a, b, c, temp;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d", a, b, c);
   
    return 0;
}
