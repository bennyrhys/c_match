//
//  main.c
//  c_test
//  Author：bennyrhys@163.com
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //1.3d分支结构的程序设计
    //1-11鸡兔同笼
    //输入 总只数：n总腿数：m
    //输出 如果没有结果返回无解，鸡数 兔数
    int m, n, a, b;//a,b分别为鸡兔个数
    scanf("%d%d", &n, &m);
    a = (4 * n- m )/ 2;
    b = n - a;
    if(m % 2 == 1 || a < 0 || b < 0){
        printf("无解");
    }else{
        printf("%d %d",a ,b);
    }
    return 0;
}
