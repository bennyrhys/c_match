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
    //1-1平均数（average）
    //输入 三个整数
    //输出 平均值
    //注意！保留三位小数
    int a, b, c;
    float average;
    scanf("%d%d%d", &a, &b, &c);
    average = (a + b + c)/ 3.0;
    printf("%.3f", average);
    return 0;
}
