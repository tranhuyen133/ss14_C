#include <stdio.h>  
#include <string.h> 

int main() {

    char chuoi[] = "Lap trinh C"; 
    
    printf("Chuoi da khai bao la: %s\n", chuoi);
    
    printf("Chuoi dao nguoc la: ");
    for (int i = strlen(chuoi) - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    
    char ky_tu;
    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &ky_tu);
    
    int dem = 0;
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ky_tu) {
            dem++;
        }
    }
    
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ky_tu, dem);
    
    return 0; 
}

