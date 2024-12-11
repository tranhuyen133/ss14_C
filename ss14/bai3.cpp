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
    
    return 0; 
}

