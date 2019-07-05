//
//  main.c
//  c_test
//
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流
#include <stdio.h>//引入数学函数

int main() {
    //1.2变量及其输入
    // 1-5计算圆柱表面积，输入半径r，高h，输出表面积，保留三位小数
    const double pi = acos(-1.0);//const使变量不可变。acos(-1.0)值为派。
    double s , s1, s2, r, h;
    scanf("%lf%lf", &r,&h);//输入数据是float时用%f,当输入数据是double时用%lf，输出最好都用%f
    s1 = pi *r *r;
    s2 = 2 *pi *r;
    s = s1 *2 + s2 *h;
    printf("半径：%.3f,高:%.3f,表面积：%.3f\n", r, h, s);
    return 0;
}
