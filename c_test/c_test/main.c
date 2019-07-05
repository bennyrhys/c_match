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
    //1-2温度（temperature）
    //输入 华氏温度f
    //输出 摄氏温度c
    //注意！保留三位小数 c = 5 *( f - 32 )/ 9
    float f, c;
    scanf("%f", &f);
    c = 5 *( f - 32 )/ 9;
    printf("%.3f", c);
    return 0;
}
