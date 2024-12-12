#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[] = "pham viet an";
    int size = strlen(text);

    printf("Chuoi ban dau: %s\n", text);

    for (int i = 0; i < size; i++){
        if (i==0 || text[i-1]==' '){
            if(text[i] >= 'a' && text[i] <= 'z'){
                text[i]=toupper(text[i]);
            }
        }    
    }

    printf("Chuoi sau khi viet hoa: %s\n", text);

    return 0;
}
