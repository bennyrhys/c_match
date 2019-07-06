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
    //2-3aabb-枚举平方根
    //输入
    //输出 所有完全平方数形式的aabb
    //注意！完全平方数 列举所有组合数字。aabb = 1100 + 11
    for (int i = 1;; i++) {
        int n = i * i;
        if(n < 1000) continue;
        if(n > 9999) break;
        int hi = n / 100;
        int lo = n % 100;
        if (hi % 10 == hi / 10 && lo % 10 == lo /10)
            printf("%d", n);
    }
    return 0;
}
