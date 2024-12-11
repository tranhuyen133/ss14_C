#include <stdio.h>  
#include <string.h> 

int main() {
    int max_length = 100; 
    char chuoi[max_length]; 
    
    printf("Nhap vao mot chuoi bat ky (toi da %d ky tu): ", max_length - 1);
    fgets(chuoi, max_length, stdin);

    size_t do_dai = strlen(chuoi);
    if (chuoi[do_dai - 1] == '\n') {
        chuoi[do_dai - 1] = '\0'; 
        do_dai--; 
    }
    
    printf("Chuoi vua nhap la: '%s'\n", chuoi);
    printf("Do dai cua chuoi la: %zu ky tu\n", do_dai);
    
    return 0; 
}

