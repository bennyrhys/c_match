//
//  main.c
//  c_test
//
//  Created by bennyrhys on 2019/6/30.
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //1.2变量及其输入
    // 1-4a+b问题
    int a, b;
    scanf("%d%d", &a, &b);//注意此时“”内不要写多余内容容易引发报错
    printf("%d\n", a + b);
    return 0;
}
