#include <stdio.h>
#include <string.h>

int main(){
    char chuoi[] = "pham viet an";
    char ket_qua[100];
    char ky_tu;
    int j = 0;
    printf("chuoi ky tu ban dau: %s\n", chuoi);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ky_tu);

    for (int i = 0; i < strlen(chuoi); i++){
        if (chuoi[i] != ky_tu) {
            ket_qua[j++] = chuoi[i];
        }
    }
    ket_qua[j] = '\0';

    printf("Ket qua sau khi xoa: %s\n", ket_qua);

    return 0;
}
