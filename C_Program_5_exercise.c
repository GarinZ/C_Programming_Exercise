//
// Created by GarinZhang on 2016/10/12.
//

#include <stdio.h>      // 包含标准库的信息
#include <string.h>
#include "C_Program_5_exercise.h"


/* g_strlen(char s*)
 * 返回字符串数组的长度
 */
int g_strlen(char *s){
    int n;
    for(n = 0; *s != '\0'; s ++)
        n ++;

    return n;
}




#define MAXSIZE 10000
static char g_allocbuf[MAXSIZE];
static char *g_allocp = g_allocbuf;

char *g_alloc(int n){
    if(g_allocbuf + MAXSIZE - g_allocp >= n){
        g_allocp += n;
        return g_allocp - n;
    }else{
        return 0;
    }
}

/* g_afree存在问题
 * g_afree必须和g_alloc以相反的顺序调用，就像栈一样
 * afree只能弹出最后一个g_alloc推入的元素，否则就会出错
 *
 */


void g_afree(char *p){
    if(g_allocbuf <= p && g_allocbuf + MAXSIZE >= p){
        g_allocp  = p;
    }
}


/* g_strcmp(char *s,char *t)
 * 根据字典序比较字符串s和t，返回第一个不相等元素的字符的差值（s-t）
 *
 */
int g_strcmp(char *s, char *t){
    int i;
    for(i = 0; s[i] == t[i]; i ++){
        if(s[i] == '\0'){
            return 0;
        }
    }
    return s[i] - t[i];
}
