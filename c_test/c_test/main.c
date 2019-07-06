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
    //2-4while 3n+1
    //输入 大于1任意自然数
    //输出 变换次数
    //注意！奇数3n+1 偶数/2
    int n, count = 0;
    scanf("%d", &n);
    while (n > 1) {
        if(n % 2 == 1) n = 3 * n + 1;
        else n /= 2;
        count++;
    }
    printf("%d", count);
    return 0;
}
