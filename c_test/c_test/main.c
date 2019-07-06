//
//  main.c
//  c_test
//  Author：bennyrhys@163.com
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //2章循环结构程序设计
    //2-1for循环1——n
    //输入 循环次数
    //输出 1——n
    //注意！依此每行一条
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
