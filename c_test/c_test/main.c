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
    // 1-6三位数反转
    int n;
    scanf("%d", &n);
    int number = n%10*100 + n/10%10*10 + n/100;
    printf("%d\n", number);
    return 0;
}
