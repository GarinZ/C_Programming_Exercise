//
// Created by 张嘉霖 on 16/9/6.
//

#include <stdio.h>      // 包含标准库的信息
#include <stdlib.h>      // 包含标准库的信息
#include "C_Program_2_exercise.h"
#include "C_Program_3_exercise.h"


int main(){
    char s[] = "string";
    char t[] = "abstract";

    int n = g_strcmp(s, t);
    printf("value is %d", n);
}

