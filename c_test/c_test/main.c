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
    // 1-8交换变量不用第三个变量
    int a, b;
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n",a ,b);
    return 0;
}
