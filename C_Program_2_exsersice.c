//
// Created by 张嘉霖 on 16/9/27.
//
#include <stdio.h>      // 包含标准库的信息
#include "C_Program_2_exsersice.h"


/* 将字符型转换成对应整型
 * int n;
 * char *str = '123456.1'
 * n = g_atoi(str);
 * 输出: 123456
 * 问题: 没有考虑第一位是空格、0、正负号的情况
 */

int g_atoi(char s[]){
    int n, i;
    n = 0;


    for(i = 1; s[i] >= '0' && s[i] <= '9' ; i ++){
        n = n * 10 + ( s[i] - '0' );
    }
    return n;
}


/* 将大写字母转换成小写对应的ASCII值,超出范围返回自身
 * char c = 'C';
 * int l= g_lower(c);
 * printf("Lowercase is %d",l);
 * 输出67
 */


int g_lower(char c){
    if(c >= 'A' && c >= 'Z'){
        return c - 'A' + 'a';
    }else{
        return c;
    }
}




/* 小写转大写ASCII
 * 要求用条件表达式写
 */

int g_upper(char c){
    return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : -1;
}


/* 将16进制数字组成的字符串转换为整型值
 * 未完成
 */
//
//int htoi(char s[]){
//    int n, i, f;
//    n = 0;
//    f = 0;
//    i =0;
////    处理前缀
////    处理十六进制
//    for(; s[i] != '\0'; i ++) {
//        if(s[i] >= '0' && s[i] <= '9'){
//            n =
//        }else if(s[i] >= 'a' && s[i] <= 'f'){
//
//        }else if(s[i] >= 'A' && s[i] <= 'F'){
//
//        }
//
//    }
//
//}


/* g_squeeze(s,c)
 * 删除字符串s中的c元素
 *
 */

/* 思路
 * 意识到了这是一个数组删除的算法，但是我不记得数据结构里的实现了
 * 第一种方法：声明辅助数组，查找c元素，用压栈的方式把不为c的元素压入数组中
 * 遇到的的问题：
 * 无法确定缓存数组的长度，导致无法使用数组（数组的使用必须确定元素个数么？）
 * s[] 和 s之间的区别是什么？
 * 最后写出来有错
 *
 * 第二种方法：对原数组进行操作，查找c元素，找到后删除，然后将后面的元素位置前移
 * 遇到的问题：
 * 我不知道怎么将数组位置前移，也没写出来
 */

/* 第一种方法 */
///* 该方法有错 */
//void g_squeeze1(char s[], char c){
//    char *arr = "";
//    int i = 0;
//    while( s[i] != '\0' ){
//        if( s[i] == c ){
//            i ++;
//            continue;
//        }else{
//            *arr = s[i];
//            arr ++;     // 若访问到最后一个元素，arr将指向只一个值为空的内存地址，而且之前存储的内容也无法找到
//            i ++;
//        };
//        return *arr;
//    }
//}



/* 第二种方法 */
/* 该方法未完成 */
//char g_squeeze2(char s[], char c){
//    int i = 0;
//    int j;
//    while(s[i] != '\0'){
//        if(s[i] == c){
//
//        }
//    }
//}


/* 书中方法 */
/* 真的好简练！*/
/* 自己的分析：
 * 初始化两个数组索引变量，i为遍历索引，j为覆盖索引，
 * for循环通过i来遍历数组
 * 判断：如果和元素相同，那么覆盖指针后移
 * 和元素不同，覆盖指针不动
 */
void g_squeeze(char s[], char  c){      // 函数是没有返回值的
    int i, j;
    for(j = i = 0; s[i] != '\0'; i ++ ){
        if( s[i] != c ){     // 执行覆盖操作
            s[j] = s[i];
            j ++;
        }
    }
    s[j] = '\0';    // 字符串结尾
}


/* 第二个参数可以是字符串 */
void g_squeeze3(char s[],char c[]){
    int i, j, k;

    for(i = 0; c[i] != '\0'; i ++){
        k = j = 0;
        while(s[j] != '\0'){
            if(s[j] != c[i]){
                s[k ++] = s[j];
            }
            j++;
        }
        s[k] = '\0';        // 这一步很容易错
    }
}




/* strcat(char s[], char c[])
 * 将c字符串接到s字符串后面
 *
 */

/* 方法1：自己写的 */
/* 缺点：while中要进行多次（s字符串长度）的判断，
 * 反思：写程序时能避免循环嵌套就避免循环嵌套
 *
 */
void g_strcat1(char s[], char c[]){
    int i = 0;
    int j;
    while(1){
        if( s[i] == '\0' ){
            for(j = 0; c[j] != '\0'; j++){
                s[i] = c[j];
                i ++;
            }
            s[i] = '\0';
            return;
        }
        i++;
    }
}

/* 书中的方法：
 * 非常简练，没有循环嵌套
 * 同时也没有用for循环
 * 我还没有彻底理解for循环和while循环的使用场景
 */
void g_strcat(char s[], char c[]){
    int i = 0;
    int j = 0;

    while(s[i] != '\0')
        i ++;

    while((s[i ++] = c[j ++]) != '\0')
        ;


}


int any(char s[],char c[]){
    int i, j;
    for(i = 0; c[i] != '\0'; i ++){
        for(j = 0; s[j] != '\0'; j ++){
            if(s[j] == c[i]){
                return j;
            }
        }
    }
    return -1;
}
