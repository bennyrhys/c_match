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
    //1-4正弦和余弦（sin，cos）
    //输入 数字
    //输出 n的sin和cos
    //注意！n<360 使用函数
    int n;
    double numsin, numcos;
    scanf("%d", &n);
    if(n < 360){
        numsin = sin(n);
        numcos = cos(n);
        printf("sin:%f cos:%f\n", numsin, numcos);
    }else{
        printf("条件不符");
    }
    return 0;
}
