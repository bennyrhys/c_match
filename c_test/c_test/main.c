//
//  main.c
//  c_test
//
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //1.3顺序结构设计
    //1-10交换变量-适合比赛的黑盒测试
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d\n",b, a);
    return 0;
}
