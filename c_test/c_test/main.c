//
//  main.c
//  c_test
//  Author：bennyrhys@163.com
//  Created by bennyrhys on 2019/7
//  Copyright © 2019 bennyrhys. All rights reserved.
//

#include <stdio.h>//控制输入输出io流

int main() {
    //2章循环结构程序设计
    //2-2aabb-+0.5
    //输入
    //输出 所有完全平方数形式的aabb
    //注意！完全平方数：先开方，再平方比较。aabb = 1100 + 11
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            int n = 1100 * i + 11 * j;//这里使用，这里定义，尽力缩小范围
            int m = floor(sqrt(n) + 0.5);//避免浮点运算误差+0.5
            if(m * m == n)
                printf("%d\n", n);
        }
    }
    return 0;
}
