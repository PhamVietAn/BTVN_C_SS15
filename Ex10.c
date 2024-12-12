#include <stdio.h>
#include <string.h>

int main(){
    char chuoi[] = "pham viet an";
    int countIndex[256] = {0};

    for(int i = 0; chuoi[i] != '\0'; i++){
        countIndex[(int)chuoi[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(countIndex[i] > 0){
            printf("%c: %d\n", i, countIndex[i]);
        }
    }

    return 0;
}
