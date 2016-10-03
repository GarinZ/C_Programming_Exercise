//
// Created by 张嘉霖 on 16/9/6.
//

#include <stdio.h>      // 包含标准库的信息
#include <stdlib.h>      // 包含标准库的信息
#include "C_Program_2_exercise.h"
#include "C_Program_3_exercise.h"


int main(){
    char s[] = "    +123456";
    int n = g_atoi2(s);
    printf("Integer is %d", n);
}

