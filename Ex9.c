#include <stdio.h>
#include <string.h>

int main(){
    char chuoi[] = "pham viet an";
    char ketQua[100];
    char index;
    int j = 0;
    printf("chuoi ky tu ban dau: %s\n", chuoi);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &index);

    for(int i = 0; i < strlen(chuoi); i++){
        if(chuoi[i] != index) {
            ketQua[j++] = chuoi[i];
        }
    }
    ketQua[j] = '\0';

    printf("Ket qua sau khi xoa: %s\n", ketQua);

    return 0;
}
