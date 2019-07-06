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
    //1-6三角形（triangle）
    //输入 三条边
    //输出 是否构成直角三角形yes/no，无法构成三角形no triangle
    //注意！
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a){
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("直角三角形");
        }
    }else{
        printf("无法构成三角形");
    }
    return 0;
}
