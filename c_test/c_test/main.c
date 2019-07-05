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
    // 1-8交换变量
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d\n",a ,b);
    return 0;
}
