#include<stdio.h>
#include<string.h>

/*
    cac ham xu ly chuoi trong C
    1. strlen: dung de tinh do dai so phan tu trong chuoi
    2. strcmp: so sanh 2 chuoi trong C
    3. strcat: dung de noi 2 chuoi ki tu
    4. strchr: dung de lay chuoi con con lai khi gap ki tu truyen vao(neu khong co ki tu thoa man kq tra ve null)
    5. strcpy: dung de copy 1 chuoi nay sang chuoi khac
    6. strncpy: dung de copy 1 chuoi sang chuoi khac
*/

int main(){
    // __strcmp__
    // char str1[]="abcd";
    // char str2[]="abce";
    // int result = strcmp(str1, str2);
    // printf("%d\n", result);

    // __strcat__
    // char str1[]="hello";
    // char str2[]=" world";
    // strcat(str1, str2);
    // printf("%s\n", str1);

    // __strchr__
    // char str1[]="xin chao sinh vien k24";
    // char *str2=strchr(str1,'j');
    // printf("%s\n",str2);

    //__strcpy__
    // char str1[]="xin chao sv k24";
    // char str2[30];
    // strcpy(str2, str1);
    // printf("%s\n", str2);

    //__strncpy__
    char str1[]="hello world";
    char str2[]="write code";
    strncpy(str2, str1, 6);
    printf("%s\n", str2);


    return 0;
}