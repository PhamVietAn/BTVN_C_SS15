#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char text[] = "anpham@123!";
    int countCharText = 0;
    int countCharNum = 0;
    int countCharSpecial = 0;
    int length = strlen(text);
    for(int i = 0; i < length; i++){
        if(isalpha(text[i])){
            countCharText++;
        }else if(isdigit(text[i])){
            countCharNum++;
        }else{
            countCharSpecial++;
        }
    }
    printf("Ky tu chu cai: %d\n", countCharText);
    printf("Ky tu so: %d\n", countCharNum);
    printf("Ky tu dac biet: %d\n", countCharSpecial);


}