#include <stdio.h>  
#include <string.h> 

int main() {
  
    char chuoi[] = "Lap trinh C"; 
    
    printf("Chuoi da khai bao la: %s\n", chuoi);
    printf("Cac ky tu trong chuoi la: ");
    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }
    printf("\n");
    
    return 0; 
}

