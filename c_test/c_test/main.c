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
    //1-7闰年（year）
    //输入 年份
    //输出 判断是否为闰年
    //注意！year%4==0 && year%100!=0 || year%400==0
    int year;
    scanf("%d", &year);
    if((year%4==0) && (year%100!=0) || (year%400==0)){
        printf("闰年");
    }else{
        printf("不是闰年");
    }
    return 0;
}
