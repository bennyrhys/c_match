//
//  main.c
//  c_test
//  Author：bennyrhys@163.com
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流
#include <math.h>//引入数学函数

int main() {
    //习题
    //1-5打折（discount）
    //输入 买衣服件数
    //输出 需要支付的金额（）元
    //注意！一件衣服95，消费300元，打八五折，保留2位小数。
    int n;
    double sum;
    scanf("%d", &n);
    if(n * 95 > 300){
        sum = n * 95 * 85 / 100.0;
    }else{
        sum = n * 95.0;
    }
    printf("%.3f", sum);
    return 0;
}
