//
// Created by 张嘉霖 on 2016/10/2.
//
#include <stdio.h>      // 包含标准库的信息
#include "C_Program_3_exercise.h"


/* 二分查找/折中查找
 * binsearch(int 待查找数，int 被查找数组，int 数组长度)
 * 查找成功返回索引值，失败返回-1
 * 限制：数组必须是"升序"的整型数组
 */


 int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;

    while(low <= high){
        mid = (low + high) / 2;

        if(x > v[mid]){
            low = mid + 1;
        }else if(x < v[mid]){
            high = mid - 1;
        }else{
            return mid;
        }
    }

    return -1;

}





void escape(char s[], char t[]){
    int i, j;
    i = 0;
    j = 0;

    while(t[i] != '\0'){
        switch(t[i]){
            case '\n':
                s[j ++] = '\\';
                s[j ++] = 'n';
                break;
            case '\t':
                s[j ++] = '\\';
                s[j ++] = 't';
                break;
            default:
                s[j ++] = t[i];
                break;
        }
        i ++;
    }
    s[j] = '\0';
}


int g_isdigit(char c){
    if(c >= '0' && c <= '9'){
        return 1;
    }else{
        return 0;
    }
}


int g_isspace(const char a)
{
    return ((int)a==32||a=='\t'||a=='\n'||a=='\v'||a=='\f'||a=='\r');
}



/* atoi(char s[])
 * 传入数字字符串，返回对应整型
 * 改进：可以匹配前置空格、正负号
 * 限制：不能带小数
 */

int g_atoi2(char s[]){
    int i,n,sign;
    n = 0;
//    去除字符串前面的空格
    for(i = 0; g_isspace(s[i]); i ++)
        ;
//    判断是否为负数
    sign = s[i] == '-'? -1 : 1;
//    如果有符号跳过符号
    if(s[i] == '+' || s[i] == '-'){
        i ++;
    }
//    for循环数组进行转换
    for(; g_isdigit(s[i]); i++){
        n = n * 10 + (s[i] - '0');
    }
    return sign * n;
}