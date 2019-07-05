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
    //1-12三整数排序
    //输入 三个整数
    //输出 排序
    //注意！1if{}else{}避免分支 2<=兼顾111情况
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a<=b && b <= c){
        printf("%d %d %d\n", a, b, c);
    }else if (a<=b && c <= b){
        printf("%d %d %d\n", a, c, b);
    }else if (b<=a && a<=c){
        printf("%d %d %d\n", b, a, c);
    }else if (b<=a && c<=a){
        printf("%d %d %d\n", b, c, a);
    }else if (c<=a && a<=b){
        printf("%d %d %d\n", c, a, b);
    }else if (c<=a && b<=a){
        printf("%d %d %d\n", c, b, a);
    }
    return 0;
}
