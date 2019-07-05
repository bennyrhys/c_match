//
//  main.c
//  c_test
//  Author：bennyrhys@163.com
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //习题
    //1-3连续和（sum）
    //输入 数字n
    //输出 sum
    //注意！1……n的和，重在结果，不注重过程
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
